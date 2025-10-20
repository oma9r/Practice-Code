package learn.example.content_calendar.controller;


import learn.example.content_calendar.repository.ContentCollectionRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.web.bind.annotation.*;
import learn.example.content_calendar.model.*;
import org.springframework.web.server.ResponseStatusException;

import java.util.List;
import java.util.Optional;

@RestController
@RequestMapping("/api/content")                            // what is the path of this controller
public class ContentController {

    //accept requests
    // return a response

    // create,update,delete,filter,sort...

    private final ContentCollectionRepository repository; // "final" once we create it we don't to change it

    @Autowired                                                              // “Hey Spring, please automatically provide (inject) an instance of this dependency here for me.”
                                                                            // So instead of you manually creating the object using new, Spring creates and manages it for you.
    public ContentController(ContentCollectionRepository repository) {
        this.repository = repository;
    }

    // make a request and find all the pieces of content in the system

    @GetMapping("")                   // the path has given in the whole class, no need to give it more time.
    public List<Content> findAll(){
        return repository.findAll();
    }

    @GetMapping("/{id}")
    public Content findById(@PathVariable Integer id){
        return repository.findById(id).orElseThrow(() -> new ResponseStatusException(HttpStatus.NOT_FOUND,"Content Not Found"));
    }


    @PostMapping("api/content")
    public void create(@RequestBody Content content){
        repository.save(content);
    }




}

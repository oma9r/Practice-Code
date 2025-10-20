package learn.example.content_calendar.repository;



import jakarta.annotation.PostConstruct;
import org.springframework.stereotype.Repository;
import learn.example.content_calendar.model.*;



import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.List;
import java.util.Optional;

@Repository
public class ContentCollectionRepository {

    //store pieces of content in memory (instead of database temp)

    private final List<Content> contentList = new ArrayList<>();

    public ContentCollectionRepository() {

    }

    public List<Content> findAll() {

        return contentList;
    }

    public Optional<Content> findById(Integer id){
        return contentList.stream().filter(c -> c.id().equals(id)).findFirst();
    }

    @PostConstruct
    private void init()
    {

        Content c = new Content(1,"My First Blog Post","blog post content desc",Status.IDEA,Type.ARTICLE,LocalDateTime.now(),null,"");
        Content c2 = new Content(2,"My First Blog Post","blog post content desc",Status.IDEA,Type.ARTICLE,LocalDateTime.now(),null,"");
        Content c34 = new Content(34,"My First Blog Post","blog post content desc",Status.IDEA,Type.ARTICLE,LocalDateTime.now(),null,"");

        contentList.add(c);
        contentList.add(c2);
        contentList.add(c34);
    }

    public void save (Content content) {

        this.contentList.add(content);

    }
}

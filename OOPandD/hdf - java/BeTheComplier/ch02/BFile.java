class BFile {
 public static void main(String[] args) {
 Episode episode = new Episode();
 episode.seriesNumber = 4;
 episode.play();
 episode.skipIntro();
 }
}

class Episode 
{
 int seriesNumber;
 int episodeNumber;
 void set_seriesNumber(int seriesNumber)
{
  seriesNumber = seriesNumber;
}
 void skipIntro() 
{
 System.out.println("Skipping intro...");
 }
 void skipToNext()
 {
 System.out.println("Loading next episode...");
 }

  void play()
   {
       System.out.println("let's play!");
    }

   
}

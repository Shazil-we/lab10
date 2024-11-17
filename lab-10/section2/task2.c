#include <stdio.h>
#include <string.h>
struct Movie
{
  char title[50];
  char genre[30];
  char director[50];
  int releaseYear;
  float rating;
};
void search(struct Movie movies[], int size, const char *genre);
void displayAllMovies(struct Movie movies[], int size);
int main()
{
  struct Movie movies[] = {
      {"The Shining", "Horror", "Stanley Kubrick", 1980, 8.4},
      {"Avengers: Infinity War", "Action", "Anthony and Joe Russo", 2018, 8.4},
      {"Avengers: Endgame", "Action", "Anthony and Joe Russo", 2019, 8.4},
      {"Harry Potter 1", "Fantasy", "Chris Columbus", 2001, 7.6},
      {"Harry Potter 2", "Fantasy", "Chris Columbus", 2002, 7.4},
      {"Harry Potter 3", "Fantasy", "Alfonso Cuarón", 2004, 7.9},
      {"Interstellar", "Sci-Fi", "Christopher Nolan", 2014, 8.6},
      {"Catch Me If You Can", "Biography", "Steven Spielberg", 2002, 8.1}};
  int size = sizeof(movies) / sizeof(movies[0]);
  int choice;

  while (1)
  {
    printf("\nMovie Database\n");
    printf("1. Search Movies by Genre\n");
    printf("2. Display All Movies\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
      char genre[30];
      printf("Enter genre: ");
      scanf(" %[^\n]", genre);
      search(movies, size, genre);
      break;
    }
    case 2:
      displayAllMovies(movies, size);
      break;
    case 3:
      return 0;
    default:
      printf("Invalid choice!\n");
    }
  }
  return 0;
}
void search(struct Movie movies[], int size, const char *genre)
{
  int found = 0;
  printf("\nMovies in genre '%s':\n", genre);
  for (int i = 0; i < size; i++)
  {
    if (strcasecmp(movies[i].genre, genre) == 0)
    {
      printf("Title: %s, Director: %s, Year: %d, Rating: %.1f\n",
             movies[i].title, movies[i].director, movies[i].releaseYear, movies[i].rating);
      found = 1;
    }
  }
  if (!found)
  {
    printf("No movies found.\n");
  }
}
void displayAllMovies(struct Movie movies[], int size)
{
  printf("\nAll Movies:\n");
  for (int i = 0; i < size; i++)
  {
    printf("Title: %s, Genre: %s, Director: %s, Year: %d, Rating: %.1f\n",
           movies[i].title, movies[i].genre, movies[i].director, movies[i].releaseYear, movies[i].rating);
  }
}

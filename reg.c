#include <stdio.h>

int main() {
  // Declare variables
  char username[100], password[100];

  // Prompt the user to enter their username and password
  printf("Enter your username: ");
  scanf("%s", username);
  printf("Enter your password: ");
  scanf("%s", password);

  // Create a new user
  FILE *fp = fopen("users.txt", "a");
  fprintf(fp, "%s,%s\n", username, password);
  fclose(fp);

  // Display a confirmation message
  printf("Registration successful!\n");

  return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "song_list.h"
#include "song_array.h"

int main() {
	struct song_node *library[27];
	int i;
	for (i = 0; i < 27; i++) {
		library[i] = NULL;
	}
	add_song(library, "Take What You Want", "Post Malone");
	add_song(library, "Hotel California", "The Eagles");
	add_song(library, "While My Guitar Gently Weeps", "George Harrison");
	add_song(library, "Little Wing", "Jimi Hendrix"); 
	add_song(library, "Sweet Child O' Mine", "Guns N' Roses");
	add_song(library, "Soothsayer", "Buckethead");
	add_song(library, "95 Freestyle", "Big L");  
	add_song(library, "Mr. Crowley", "Ozzy Osbourne");
	add_song(library, "Free Bird", "Lynyrd Skynyrd");  
	add_song(library, "Random Song", "*Weird Name*");
	print_library(library);
	srand(time(NULL));
	shuffle(library, 5);
	
	/*printf ("Testing insert_front, insert_alphabetical, print_list\n------------------------\n");
	struct song_node *library = NULL;
	library = insert_front (library, "Take What You Want", "Post Malone");
	library = insert_front (library, "While My Guitar Gently Weeps", "George Harrison");
	library = insert_alphabetical (library, "Test Dummy", " Post Malone");
	library = insert_alphabetical (library, "Soothsayer", "Buckethead");
	printf("\nPrinting List\n\n");
	print_list (library);
	
	printf ("Testing find_artist_song\n------------------------\n");
	find_artist_song(library, "Chosen One", "Polo G");
	printf("\n");
	find_artist_song(library, "Take What You Want", "Post Malone");
	printf("\n");
	
	printf ("Testing find_first_artist_song\n------------------------\n");
	find_first_artist_song(library, "Polo G");
	printf("\n");
	find_first_artist_song(library, "Post Malone");	
	printf("\n");
	
	printf ("Testing delete_song\n------------------------\n");
	delete_song (library, "Test Dummy");
	printf("\n");
	print_list (library);
	printf("\n");
	
	library = free_list (library);
	printf("\n");*/
	
	return 0;
}

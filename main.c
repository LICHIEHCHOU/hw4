#include "headers.h"
#include "function.h"

int main(void)
{
    printf("LIU\n");
    printf("pinyan is so bon\n");
    printf("yumin is so disturbing\n");
    int i,j;
    int WID=900,HEI=900;
    srand(time(NULL));
    randnum();
    display();

    ALLEGRO_DISPLAY* display = NULL;
    ALLEGRO_BITMAP* bitmap = NULL;
    ALLEGRO_BITMAP* bitmap1 = NULL;
    ALLEGRO_BITMAP* bitmap2 = NULL;
    ALLEGRO_BITMAP* bitmap3 = NULL;
    ALLEGRO_BITMAP* bitmap4 = NULL;


    // Initialize Allegro
    al_init();
    al_init_image_addon();
    // Create allegro display
    display = al_create_display(DISPLAY_WIDTH, DISPLAY_HEIGHT);
    // Load bitmap
    bitmap = al_load_bitmap("./background.jpg");
    al_draw_bitmap(bitmap,10,10,0);

    bitmap1 = al_load_bitmap("./candy1.jpg");
    bitmap2 = al_load_bitmap("./candy2.jpg");
    bitmap3 = al_load_bitmap("./candy3.jpg");
    bitmap4 = al_load_bitmap("./candy4.jpg");

    for(j=0;j<Row;j++){
        for(i=0;i<Col;i++)
        {

           if(CANDY[j].array[i] == 1){
            al_draw_bitmap(bitmap1,100*i+7,100*j+7,0);

           }

           else  if(CANDY[j].array[i] == 2){
            al_draw_bitmap(bitmap2,100*i+7,100*j+7,0);

           }

           else if(CANDY[j].array[i] == 3){
           al_draw_bitmap(bitmap3,100*i+7,100*j+7,0);

           }

           else if(CANDY[j].array[i] == 4){
           al_draw_bitmap(bitmap4,100*i+7,100*j+7,0);

           }
         }
    }

    // Flip display to show the drawing result
    al_flip_display();
    system("pause");

    // Cleanup
    al_destroy_bitmap(bitmap1);
    al_destroy_bitmap(bitmap2);
    al_destroy_bitmap(bitmap3);
    al_destroy_bitmap(bitmap4);
    al_destroy_display(display);


    return 0;

}

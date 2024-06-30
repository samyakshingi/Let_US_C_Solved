// An automobile company has serial number for engine parts starting 
// from AA0 to FF9. The other characteristics of parts are Year of 
// manufacture, material and quantity manufactured.
// (1) Specify a structure to store information corresponding to a 
// part.
// (2) Write a program to retrieve information on parts with serial 
// numbers between BB1 and CC6.

# include <stdio.h>
struct automobile
{
    int s_no;
    int year_o_manu;
    char material[20];
    int quantity;
} ;
struct automobile part[2];
void retrieve();
void display();
void set_auto_data();
int main(){
    int i;
    set_auto_data();
    display();
    retrieve();
    return 0;
}


void retrieve(){
int i, j = 0;
printf ( "\nList of parts between BB1 & CC6:" ) ;
for( i=0;i<2;i++){
    if((part[i].s_no>=0xbb1) && (part[i].s_no <= 0xcc6 )){
        j = 1 ;
        printf ( "\n\n\tPart Number = %d", i ) ;
        printf ( "\nSerial Number = %x", part[ i ].s_no ) ;
        printf ( "\nYear of manufacturing = %d", part[ i ].year_o_manu);
        printf ( "\nMaterial used : %s", part[ i ].material);
        printf ( "\nMfg Quantity = %d", part[ i ].quantity);
    }
}
    if(j == 0)
        printf ("\nNo such record present");
}

void display(){
    int i ;
    for (i = 0; i < 2 ; i++){
        printf ( "\n\n\tPart Number = %d", i ) ;
        printf ( "\nSerial Number = %x", part[ i ].s_no ) ;
        printf ( "\nYear of mfg = %d", part[ i ].year_o_manu ) ;
        printf ( "\nMaterial used : %s", part[ i ].material ) ;
        printf ( "\nManufacture Quantity = %d", part[ i ].quantity ) ;
    }
}

void set_auto_data(){
    int i ;
    for(i = 0 ; i < 2 ; i++){
        while ( 1 )
        {
            printf ( "\nEnter the serial Number of the part" ) ;
            printf ( "\nNumber must be between AA0 and FF9 " ) ;
            scanf ( "%x", &part[ i ].s_no ) ;
            if ( part[ i ].s_no >= 0xAA0 && part[ i ].s_no <= 0xff9 )
                break ;
        }
        printf ( "\nEnter the Year of manufacturing of the part" ) ;
        scanf ( "%d", &part[ i ].year_o_manu ) ;
        printf ( "\nEnter the material of the part" ) ;
        scanf ( "%s", &part[ i ].material ) ;
        fflush ( stdin ) ;
        printf ( "\nEnter the quantity of the part" ) ;
        scanf ( "%d", &part[ i ].quantity ) ;
    }
}

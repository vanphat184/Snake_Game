
void VeKhung(){
    for (int i = MINX ; i<=MAXX ; i++)
        for (int j = MINX ; j<=MAXY ; j++)
            if ((i==MINX) || (i==MAXX) || (j==MINY) || (j==MAXY)){
            gotoxy(i,j);
            printf("+");
        }
}

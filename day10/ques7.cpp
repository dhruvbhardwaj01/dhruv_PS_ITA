int strangeGrid(int r, int c) {
    if(r%2!=0)
    {
   return (r/2)*10+2*(c-1);
    }
    else{
        return (r/2-1)*10+(2*(c-1)+1);
    }

}
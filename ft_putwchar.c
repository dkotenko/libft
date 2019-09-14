void	ft_putwchar(int c) 
{
	int on= 0;
	char b[4];
	int i = 0;
  
  if (sizeof(c) == 4)  
	{
if (c<0x80)
{
  b[i++]=c;
on = 1;
}
else if (c<0x800) b[i++]=192+c/64, b[i++]=128+c%64, on = 2;
else if (c-0xd800u<0x800) return 0;
else if (c<0x10000) b[i++]=224+c/4096, b[i++]=128+c/64%64, b[i++]=128+c%64, on = 3;
else if (c<0x110000)
{
  b[i++]=240+c/262144; 
b[i++]=128+c/4096%64; 
  b[i++]=128+c/64%64; 
	b[i++]=128+c%64;
	  on = 4;
}
  }
write(1, &b, on);
}

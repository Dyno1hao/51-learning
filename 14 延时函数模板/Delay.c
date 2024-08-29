
void Delay5us()		//@11.0592MHz
{
}

	_nop_();    //2us

	_nop_();
	_nop_();    //3us

	_nop_();
	_nop_();
	_nop_();    //4us



void Delayxms(unsigned char x)		//@11.0592MHz
{

    unsigned char i, j;
    while(x)
    {
	    _nop_();
    	    i = 2;
	    j = 199;
	    do
	    {
	    	    while (--j);
    	    } while (--i);
    x--;
    }
}


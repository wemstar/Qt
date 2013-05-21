package gui.gra.wyjatki;

import java.awt.Point;

public class LimitException extends Exception {
	public LimitException(String str)
	{
		super(str);
	}
	public LimitException()
	{
		super();
	}
	public LimitException(Point punkt,int maszt)
	{
		super(String.format(" Osiagnieto limit statku pozycja:%1$d %2$d ilosc masztow %3$d", punkt.x,punkt.y,maszt));
	}

}

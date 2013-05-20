package gui.gra.statki;

import gui.gra.wyjatki.BadPositionException;
import java.util.*;
import java.awt.Point;

public class Statek {
	
	public static final int RIGHT=0;
	public static final int DOWN=1;
	
	public Statek(Point punkt,int iloscMasztow,int dir)throws BadPositionException
	{
		Point direc=direction(dir);
		this.iloscMasztow=iloscMasztow;
		isValid(punkt,iloscMasztow,direc);
		for(int i=0;i<iloscMasztow;++i)
		{
			pozycja.put(new Point(punkt.x+i+direc.x,punkt.y+i*direc.y),new Integer(0));
		}
		
	}
	
	
	
	
	private void isValid(Point punkt,int iloscMasztow,Point dir)throws BadPositionException
	{
		
		if(punkt.x<0)throw new BadPositionException(punkt);
		if(punkt.y<0)throw new BadPositionException(punkt);
		
		
		for(int i=0;i<iloscMasztow;++i)
		{
			if(punkt.x+i*dir.x>9)throw new BadPositionException(punkt);
			if(punkt.y+i*dir.y>9)throw new BadPositionException(punkt);
			
		}
	}
	private Point direction(int direction)
	{
		int dx=direction==RIGHT?1:0;
		int dy=direction==DOWN?1:0;
		return new Point(dx,dy);
		
	}
	
	
	
	
	
	

	public boolean isHit(Point point) {
		
		if(pozycja.containsKey(point))
		{
			pozycja.put(point, new Integer(1));
			return true;
		}
		
		
		return false;
	}




	public boolean isDestroyed() {
		if(pozycja.containsValue(new Integer(0)))return false;
		return true;
	}




	public void setPosition(Point point, int dir) throws BadPositionException {
		
		isValid(point,iloscMasztow,direction(dir));
		
		
	}
	
	
	
	private Map<Point,Integer> pozycja=new HashMap<Point,Integer>();
	private int iloscMasztow;
	
	
	

}

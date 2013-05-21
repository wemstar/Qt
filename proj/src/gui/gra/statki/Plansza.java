package gui.gra.statki;

import gui.gra.wyjatki.BadCoordinateException;
import gui.gra.wyjatki.BadPositionException;
import gui.gra.wyjatki.LimitException;

import java.awt.*;
import java.awt.event.*;
import java.util.*;
import java.util.List;

public class Plansza  {
	
	

	public void addShip(Point poz,int i,int x) throws BadPositionException, LimitException
	{
		if(limits[i-1]<1)throw new LimitException(poz,i);
		Statek statek=new Statek(poz,i,x);
		if(!isValidPosition(statek))throw new BadPositionException(poz);
		statki.add(statek);
		limits[i-1]--;
	}
	public boolean isValidPosition(Statek statek)
	{
		for(Statek stat:statki)
		{
			for(Point punkt:stat.getPozycja().keySet())
			{
				for(Point punkt2: statek.getPozycja().keySet())
				{
					if(punkt.distance(punkt2)<2)return false;
				}
			}
		}
		return true;
	}
	
	public Point zamienWspolrzedne(String[] poz)throws BadCoordinateException
	{
		if(poz.length!=2)throw new BadCoordinateException();
		int x=Integer.valueOf(poz[0]);
		int y=Integer.valueOf(poz[1]);
		return new Point(x,y);
		
	}
	
	
	private List<Statek> statki=new ArrayList<Statek>();
	private int[] limits={4,3,2,1};

}

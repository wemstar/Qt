package gui.gra.rdzen.gracz.statki;

import gui.gra.rdzen.wyjatki.BadPositionException;

import java.awt.Point;
import java.util.HashMap;
import java.util.Map;

/**
 * @author wemstar
 * klasa reprezetuje staki wykorzystae w grze
 *
 */

public class Statek {
	
	public static final int RIGHT=0;
	public static final int DOWN=1;
	
	/**
	 * @param punkt punkt poczatkowy statku
	 * @param iloscMasztow ilosc masztow dla statku
	 * @param dir kierunek staku
	 * @throws BadPositionException
	 */
	public Statek(Point punkt,int iloscMasztow,int dir)throws BadPositionException
	{
		Point direc=direction(dir);
		this.iloscMasztow=iloscMasztow;
		isValid(punkt,iloscMasztow,direc);
		for(int i=0;i<iloscMasztow;++i)
		{
			pozycja.put(new Point(punkt.x+i*direc.x,punkt.y+i*direc.y),new Integer(0));
		}
		
	}
	
	
	
	
	/**
	 * funkcja sprawdza czy wspolrzedne dla sttku sa prawdziwe
	 * @param punkt punkt poczatkowy statku
	 * @param iloscMasztow ilosc masztow statku
	 * @param dir kirunek statku
	 * @throws BadPositionException
	 */
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
	/**
	 * @param direction kierunek statku
	 * @return zwraca punkt w postaci (dx,dy) któwy oznacza kierunek statku
	 */
	private Point direction(int direction)
	{
		int dx=direction==RIGHT?1:0;
		int dy=direction==DOWN?1:0;
		return new Point(dx,dy);
		
	}
	
	
	
	
	
	

	/**
	 * sprawdza czy statek zostal trafiony
	 * @param point punkt strału
	 * @return true jestli został trafiony 
	 */
	public boolean isHit(Point point) {
		
		if(pozycja.containsKey(point))
		{
			pozycja.put(point, new Integer(1));
			return true;
		}
		
		
		return false;
	}




	/**
	 * @return true jesli statek jest zniszczony
	 */
	public boolean isDestroyed() {
		if(pozycja.containsValue(new Integer(0)))return false;
		return true;
	}




	/**
	 * ustawia pozycje statku
	 * @param point punkt poczatkowy
	 * @param dir kierunek statku
	 * @throws BadPositionException
	 */
	public void setPosition(Point point, int dir) throws BadPositionException {
		
		isValid(point,iloscMasztow,direction(dir));
		
		
	}
	
	/**
	 * @return zwraca pozycje statku w postaci mapy punktow
	 */
	public Map<Point,Integer> getPozycja() {
		return pozycja;
	}
	
	
	private Map<Point,Integer> pozycja=new HashMap<Point,Integer>();
	private int iloscMasztow;

	public int getType() {
		return iloscMasztow;
	}

	
	
	
	

}

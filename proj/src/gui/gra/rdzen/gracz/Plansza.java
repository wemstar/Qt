package gui.gra.rdzen.gracz;

import gui.gra.rdzen.gracz.statki.Statek;
import gui.gra.rdzen.gracz.statki.StatekFactory;
import gui.gra.rdzen.wyjatki.BadPositionException;
import gui.gra.rdzen.wyjatki.LimitException;

import java.awt.Point;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Random;

/**
 * @author wemstar
 * klasa reprezentuje plansza dla graczy
 */

public class Plansza  {
	
	

	/**
	 * dodaje statki do planszy
	 * @param poz pozycja statku
	 * @param i ilosc masztow
	 * @param x kirunek statku
	 * @throws BadPositionException
	 * @throws LimitException
	 */
	public void addShip(Point poz,int maszty,int kierunek) throws BadPositionException, LimitException
	{
		
		Statek statek=stocznia.zwodujStetek(poz,maszty,kierunek);
		if(!isValidPosition(statek)||stocznia.getLimit(maszty)<1)throw new BadPositionException(poz);
		stocznia.decreseLimit(maszty);
		statki.add(statek);
		
		
	}
	
	/**
	 * sprawdza kolizje statku ze statkami na planszy
	 * @param statek 
	 * @return
	 */
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
	
	/**
	 * zamienia wspolrzedna na punkt
	 * @param poz
	 * @return
	 * @throws BadCoordinateException
	 */
	
	
	/**
	 * sprawdza czy statek z planszy został trafiony
	 * @param punkt
	 * @return
	 */
	public boolean isHitShip(Point punkt)
	{
		for(Statek statek:statki)
		{
			if(statek.isHit(punkt))return true;
		}
		return false;
	}
	
	/**
	 * sprawdza czy na planszy są nie zatopione statki
	 * @return true jesli wszystkie statki zostały zatopione
	 */
	public boolean isLoser() {
		for(Statek statek:statki)
		{
			if(!statek.isDestroyed())return false;
			
		}
		
		return true;
	}
	/**
	 * funkcja pozwala wylosowac plansze
	 */
	public void  losujPlansze()
	{
		for(int i=1;i<5;++i)
		{
			createShip(i);
		}
		
	}
	
	/**
	 * @return staki na planszy
	 */
	public List<Statek> getShips()
	{
		return statki;
	}
	
	/**
	 * sprawdza limit planszy
	 * @return true jesli zostałl przekroczony limit
	 */
	public boolean isOverLimit()
	{
		for(int i=1;i<5;i++)if(stocznia.getLimit(i)>0)return false;
		return true;
		
		
	}
	/**
	 * sprawdza czy dany punkt zawiera statek
	 * @param pkt punkt proby
	 * @return -1 jesli nie zawiera statku
	 */
	public int getOnPosition(Point pkt)
	{
		for(Statek sta:statki)
		{
			Map<Point,Integer> poz=sta.getPozycja();
			if(poz.containsKey(pkt)){return sta.getType();};
		}
		return -1;
	}
	
	
	/**
	 * tworzy statek o 
	 * @param i ilosć masztów
	 */
	private void createShip(int i) {
		while(stocznia.getLimit(i)>0)
		{
			try {
				addShip(new Point(rand.nextInt(10),rand.nextInt(10)),i,rand.nextInt(2));
			} catch (BadPositionException e) {
				// TODO Auto-generated catch block
				e.getMessage();
			} catch (LimitException e) {
				// TODO Auto-generated catch block
				e.getMessage();
			}
		}
		
	}


	private List<Statek> statki=new ArrayList<Statek>();
	private StatekFactory stocznia=new StatekFactory(1,2,3,4);
	private Random rand=new Random();

	
	

}

package gui.gra.rdzen.gracz.statki;

import gui.gra.rdzen.wyjatki.BadPositionException;
import gui.gra.rdzen.wyjatki.LimitException;

import java.awt.Point;



/**
 * @author wemstar
 *klasa buduje staki dla limitu
 */
public class StatekFactory {
	
	/**
	 * @param cztery limit dla czteromasztowców
	 * @param trzy limit dla trójmasztowców
	 * @param dwa limit dla dwumasztowców
	 * @param jeden limit dla jednomasztowców
	 */
	public StatekFactory(int cztery,int trzy,int dwa,int jeden)
	{
		limits[0]=jeden;
		limits[1]=dwa;
		limits[2]=trzy;
		limits[3]=cztery;
	}
	
	/**
	 * Budjuje statek
	 * @param punkt Dziób statku
	 * @param iloscMasztow liczba masztów
	 * @param dir kierunek Statu
	 * @return Gotowy statek
	 * @throws BadPositionException
	 * @throws LimitException
	 */
	public Statek zwodujStetek(Point punkt,int iloscMasztow,int dir) throws BadPositionException, LimitException
	{
		if(limits[iloscMasztow-1]<1)throw new LimitException();
		
		return new Statek( punkt, iloscMasztow,dir);
		
	}
	/**
	 * @param i Liczba msztów
	 * @return limit dla podanej liczbie msztów
	 */
	public int getLimit(int i)
	{
		return limits[i-1];
	}
	/**
	 * @return tablice z limitami
	 */
	public int[] getLimits()
	{
		return limits;
	}
	
	/** zmniejsz limit statku
	 * @param i
	 */
	public void decreseLimit(int i)
	{
		limits[i-1]--;
	}
	private int[] limits={4,3,2,1};

}

package gui.gra.rdzen.gracz;

import java.awt.Point;

/**
 * @author wemstar
 * klasa reprezentująca gracza
 */
public class Gracz {
	
	
	
	/**
	 * funkcja ustawia plansze dla danego gracza
	 * @param plan plansza danego gracza
	 */
	public void setPlansza(Plansza plan)
	{
		plansza=plan;
	}
	
	/**
	 * @return plansze Gracza
	 */
	public Plansza getPlansza()
	{
		return plansza;
	}
	
	/**
	 * sprawdza czy gra zakończyła się porażką
	 * @return true jesli gracz przegrał
	 */
	public boolean przegrana()
	{
		return plansza.isLoser();
	}
	
	/** ustawai SI odpowiedzalne za poruszanie gracza
	 * najpierw należy wywołac setPlansza();
	 * @param mov
	 */
	public void setMove(Move mov)
	{
		move=mov;
		move.setPlansza(plansza);
	}
	
	/**
	 * @return następny ruch gracza
	 */
	public Point getNextMove()
	{
		last=move.nextMove();
		return last;
	}
	
	/**
	 * przyjmuje uderzenie na dany Punkt
	 * @param strzal punkt ostrzełu
	 * @return true jesli został trafiony
	 */
	public boolean reciveHit(Point strzal)
	{
		return plansza.isHitShip(strzal);
	}
	/**
	 * @return zwraca ostatni ruch gracza
	 */
	public Point lastHit() {
		
		return last;
	}
	
	
	
	
	
	public Move move;
	private Plansza plansza;
	
	Point last;

}

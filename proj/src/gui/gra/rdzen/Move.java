package gui.gra.rdzen;

import java.awt.Point;


/**
 * @author wemstar
 * intermejs reprezentujacy poruszanie gracza
 */
public interface Move {
	
	
	/** zwraca następny ruch gracza
	 * @return
	 */
	public Point nextMove();
	
	/** ustawia plansza dla poruszacza
	 * @param plansza
	 */
	public void setPlansza(Plansza plansza);

}

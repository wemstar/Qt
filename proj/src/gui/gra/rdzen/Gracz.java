package gui.gra.rdzen;

import java.awt.Point;

public class Gracz {
	
	
	
	public void setPlansza(Plansza plan)
	{
		plansza=plan;
	}
	public boolean przegrana()
	{
		return plansza.isLoser();
	}
	public void setMove(Move mov)
	{
		move=mov;
		move.setPlansza(plansza);
	}
	public Point getNextMove()
	{
		return move.nextMove();
	}
	public boolean reciveHit(Point strzal)
	{
		return plansza.isHitShip(strzal);
	}
	
	
	
	
	
	public Move move;
	private Plansza plansza;

}

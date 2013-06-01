package gui.gra.rdzen;

import gui.gra.rdzen.gracz.Gracz;
import gui.gra.rdzen.wyjatki.EndGame;

import java.awt.Point;

public class Game {

	/**
	 * @return zwraca drugiego gracza
	 */
	public Gracz getSecondPlayer() {
		
		return secondPlayer;
	}

	/**
	 * @return zwraza pierwszego gracza
	 */
	public Gracz getFirstPlayer() {
		
		return firstPlayer;
	}
	
	/**
	 * Ustawia graczy dla dane gry
	 * 
	 * @param player1 Gracz 1
	 * @param player2 Gracz 2
	 */
	public void setPlayers(Gracz player1, Gracz player2) {
		firstPlayer=player1;
		secondPlayer=player2;
		
	}
	/**
	 * Sprawdza czy gra sie zakonczyła
	 * @return true jesli gra została zakończona
	 */
	public boolean isEndGame()
	{
		return firstPlayer.przegrana()||secondPlayer.przegrana();
	}
	
	/**
	 * odpowada za przekazywanie ruchów prawdziwego gracza
	 * @param punkt Punkt ostrzelany przez gracza
	 * @return true jesli gracz trafił
	 * @throws EndGame
	 */
	public BoolPar realPlayerMove(Point punkt)throws EndGame
	{
		boolean isHit1=secondPlayer.reciveHit(punkt);
		
		boolean isHit2=firstPlayer.reciveHit(secondPlayer.getNextMove());
		if(isEndGame())
		{
			if(firstPlayer.przegrana())throw new EndGame("Przegral gracz 1");
			else throw new EndGame("Przegral gracz 2");
		}
		return new BoolPar(isHit1,isHit2);
		
	}
	/**
	 * @author wemstar
	 *	wewneŧrzna klasa która przekazuje para wartości logicznych
	 * oznaczja one wartosc logiczna poprzedniej tury
	 */
	public class BoolPar
	{
		private boolean second;
		private boolean first;

		BoolPar(boolean first,boolean second)
		{
			this.first=first;
			this.second=second;
		}
		public boolean getFirst(){return first;}
		public boolean getSecond(){return second;}
	}
	
	/**
	 * @return pozycja ostrzelana przez gracza komputerowego w poprzednim ruchu
	 */
	public Point getSecondLastHit()
	{
		return secondPlayer.lastHit();
	}
	
	
	
	
	Gracz firstPlayer;
	Gracz secondPlayer;

}

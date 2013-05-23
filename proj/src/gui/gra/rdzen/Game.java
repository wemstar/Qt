package gui.gra.rdzen;

public class Game {

	public Gracz getSecondPlayer() {
		// TODO Auto-generated method stub
		return secondPlayer;
	}

	public Gracz getFirstPlayer() {
		// TODO Auto-generated method stub
		return firstPlayer;
	}

	public void setPlayers(Gracz player1, Gracz player2) {
		firstPlayer=player1;
		secondPlayer=player2;
		
	}
	public boolean isEndGame()
	{
		return firstPlayer.przegrana()||secondPlayer.przegrana();
	}
	
	
	
	Gracz firstPlayer;
	Gracz secondPlayer;

}

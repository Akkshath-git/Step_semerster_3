 import java.util.*;

 class RockPaperScissors {

     static String playRound(String playerMove, String computerMove) {

        playerMove = playerMove.toLowerCase();
        computerMove = computerMove.toLowerCase();

        if (playerMove.equals(computerMove))
            return "Draw";

        if ((playerMove.equals("rock") && computerMove.equals("scissors")) ||
            (playerMove.equals("paper") && computerMove.equals("rock")) ||
            (playerMove.equals("scissors") && computerMove.equals("paper")))
            return "Player Wins";

        return "Computer Wins";
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Random rand = new Random();

        String[] moves = {"rock", "paper", "scissors"};

        int wins = 0, losses = 0, draws = 0;

        System.out.print("Enter number of rounds: ");
        int n = sc.nextInt();

        System.out.println("\nRound\tPlayer\tComputer\tResult");

        for (int i = 1; i <= n; i++) {

            System.out.print("Enter move (rock/paper/scissors): ");
            String player = sc.next();

            String computer = moves[rand.nextInt(3)];

            String result = playRound(player, computer);

            if (result.equals("Player Wins"))
                wins++;
            else if (result.equals("Computer Wins"))
                losses++;
            else
                draws++;

            System.out.println(i + "\t" + player + "\t" + computer + "\t\t" + result);
        }

        double percentage = (wins * 100.0) / n;

        System.out.println("\nWins : " + wins);
        System.out.println("Losses : " + losses);
        System.out.println("Draws : " + draws);
        System.out.printf("Win Percentage : %.2f%%\n", percentage);
    }
} {
    
}

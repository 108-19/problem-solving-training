vector<int> rows(3), cols(3);
        int diag = 0, antiDiag = 0;
        int player = 1;

        for (auto& move : moves) {
            int r = move[0], c = move[1];
            rows[r] += player;
            cols[c] += player;
            if (r == c) diag += player;
            if (r + c == 2) antiDiag += player;
            if (abs(rows[r]) == 3 || abs(cols[c]) == 3 || abs(diag) == 3 || abs(antiDiag) == 3)
                return (player == 1) ? "A" : "B";
            player *= -1; // Switch players
        }

        return (moves.size() == 9) ? "Draw" : "Pending"; 

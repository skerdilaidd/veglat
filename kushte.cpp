
if (oret_punes >= 0 && oret_punes <= 48) {
    paga = oret_punes * 15;

    cout << "Paga e punetorit: "
        << fixed << setprecision(2)
        << paga << " euro" << endl;

    paga_totale += paga;
    singlePhaseTransportModel laminarTransport(U, phi);

    // PCM properties
    dimensionedScalar hm(laminarTransport.lookup("hm"));
    dimensionedScalar Tm(laminarTransport.lookup("Tm"));
    dimensionedScalar Tmr(laminarTransport.lookup("Tmr"));
    dimensionedScalar beta(laminarTransport.lookup("beta"));

    // liquid phase
    dimensionedScalar rhol(laminarTransport.lookup("rhol"));
    dimensionedScalar Cpl(laminarTransport.lookup("Cpl"));
    dimensionedScalar kappal(laminarTransport.lookup("kappal"));

    // solid phase
    dimensionedScalar rhos(laminarTransport.lookup("rhos"));
    dimensionedScalar Cps(laminarTransport.lookup("Cps"));
    dimensionedScalar kappas(laminarTransport.lookup("kappas"));



    // flow parameters
    dimensionedScalar TRef(laminarTransport.lookup("TRef"));
    dimensionedScalar Prt(laminarTransport.lookup("Prt"));
    dimensionedScalar Cu(laminarTransport.lookup("Cu"));
    dimensionedScalar b(laminarTransport.lookup("b"));

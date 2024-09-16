class Unless 
    def condicion
        jugador = "Benzema"
        evento = "caer"
        unless jugador == "Neymar" and evento == "caer"
            puts "Tarjeta roja porque no eres Neymar"
        else
            puts "Hola neymar eres mi ídolo"
        end
    end
end

op = Unless.new
op.condicion

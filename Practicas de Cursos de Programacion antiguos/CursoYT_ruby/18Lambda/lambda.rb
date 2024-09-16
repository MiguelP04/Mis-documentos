class Miclase
    def initilize()
    end

    def mostrar
        la = lambda do |mia|
            if mia == true
                return "Tú mama dvd es mía"
            else
                return "Tú digamos que no es mía" 
            end
        end
        puts la.call(true)
    end
end

ciclo = Miclase.new
ciclo.mostrar()

class Miclase
    def initilize()
    end

    def iterar
        suma = 0
        for i in 0..9
            if i == 3
                next
                break
                redo
            end
            suma += 1
        end
        puts suma
    end
end

ciclo = Miclase.new
ciclo.iterar

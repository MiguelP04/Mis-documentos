class Miclase
    def initilize()
    end

    def iterar
       i = 0
       until i > 5
        puts "Tú número es el " + i.to_s
            i += 1
       end
    end
end

ciclo = Miclase.new
ciclo.iterar

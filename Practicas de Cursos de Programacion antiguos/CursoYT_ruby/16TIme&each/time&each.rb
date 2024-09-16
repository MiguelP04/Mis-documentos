class Miclase
    def initilize()
    end

    def iterar
        x = 3
        x.times do
            puts "tu mama es mia"

        end

        array = %w[cod zelda tmgs]

        array.each do |g|
            puts "los mejores juegos son #{g}"
        end
    end
end

ciclo = Miclase.new
ciclo.iterar

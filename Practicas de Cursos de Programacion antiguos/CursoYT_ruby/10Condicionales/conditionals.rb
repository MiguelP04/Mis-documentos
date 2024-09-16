class Condicionales
    def initialize()
    end

    def condicional()
        x = 6
        x = x.to_i
        if x > 5
            puts "soy mayor a 5"
        elsif x == 5
            puts "soy igual a 5"
        else
            puts "soy menor a 5"
        end

        y = gets().chomp()
        y = y.to_i
        
        case y
        when 1
            puts "Soy el número 1"
        when 2
            puts "Soy el número 2"
        when 3
            puts "Soy el número 3"
        when 4..6
            puts "Soy un número que interpola entre 4 y 6"
        else
            puts "Soy otro número"
        end
    end            
end

condicion = Condicionales.new()
condicion.condicional()
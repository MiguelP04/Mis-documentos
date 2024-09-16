class Boxear
    def initialize()
    end

    def pegar()
        puts "puñetazo con la mano derecha"
    end

    def pegar_esquivar()
        pegar()
        puts "agacharse para esquivar "
    end    
    def ledolio?
        return true
        
    end    
end
    
boxeador = Boxear.new()
boxeador.pegar_esquivar()
puts boxeador.ledolio?()

class Calcular
    def initialize()
    end 

    def calcular_area_triangulo(base,altura)
        area = base * altura
        puts area
    end
end

calculo = Calcular.new()
calculo.calcular_area_triangulo(4,5)
class Persona
    def initialize
    end

    def metodo1
        puts "Éste es el método de instancia"
    end

    def self.metodo2
        puts "Éste es el método de clase"
    end
end

Persona.metodo2
p = Persona.new
p.metodo1
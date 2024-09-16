class Persona
    attr_accessor :nombre, :edad, :peso
    def initiliaze()
    end

    def comer(*args)
        puts "Persona comiendo " + args[0] + " a las " + args[1]
    end
end

p = Persona.new
p.comer("hamburguesa","22:00HS")
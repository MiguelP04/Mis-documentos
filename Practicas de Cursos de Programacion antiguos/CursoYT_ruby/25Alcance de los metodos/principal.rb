require_relative "scope_methods.rb"

class Desarrollador
    attr_accessor :lenguaje_favorito
    def initiliaze
    end

    def programar_comer
        p = Persona.new
        puts p.comer()
    end

    def debugear
        return "Debugeando..."
    end
end

d = Desarrollador.new
d.programar_comer
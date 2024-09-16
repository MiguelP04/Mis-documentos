require_relative "herencia.rb"

class Desarrollador < Persona
    attr_accessor :lenguaje_favorito
    def initiliaze
    end

    def programar
        return "Programando..."
    end

    def debugear
        return "Debugeando..."
    end
end

p = Desarrollador.new
p.lenguaje_favorito = "ruby"
p.nombre = "Miguel"
p.edad = 18
puts p.nombre + " está " + p.programar + " en " + p.lenguaje_favorito
puts p.nombre + " tiene " + p.edad.to_s + " años " + "y está " + p.debugear
puts p.nombre + " esta " + p.hablar
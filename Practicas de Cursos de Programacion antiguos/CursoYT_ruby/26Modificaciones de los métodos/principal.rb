require_relative "alteration_methods.rb"

class Persona
    def hablar
        puts "Esta persona está hablando"
    end
end

class String
    def escribir
        puts "Hola mi nombre es..."
    end
end

texto = "hola"
texto.escribir()
puts texto.length
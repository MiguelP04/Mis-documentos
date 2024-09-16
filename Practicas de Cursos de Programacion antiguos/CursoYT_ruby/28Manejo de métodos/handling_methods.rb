class Persona
    attr_accessor :nombre, :edad, :peso
    def initiliaze()
    end

        def genera_excepcion
        begin
                texto = "Hola mundo"
                texto.multiplicar
        rescue => e
                puts e.message
                puts e.backtrace.inspect
        end
     end
end

d = Persona.new
d.genera_excepcion
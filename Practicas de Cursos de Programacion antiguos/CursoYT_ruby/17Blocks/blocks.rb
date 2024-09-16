class Miclase
    def initilize()
    end

    def block
        puts "hola mundo"
        yield 5
        puts "que pasa"
    end

    def enviar()
        block{|i| puts "Soy el bloque #{i}"}
    end
end

ciclo = Miclase.new
ciclo.enviar()

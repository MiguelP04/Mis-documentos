class Celular
    def initialize(modelo,color)
        @modelo = modelo
        @color = color
    end

    def llamar()
        puts @modelo + "-" + @color + " está llamando ..."
    end
end
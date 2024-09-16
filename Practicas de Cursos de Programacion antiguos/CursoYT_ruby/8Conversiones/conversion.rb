=begin
    string = to_s | to_str
    int = to_i | to_int
    float = to_f
=end

class Conversiones
    def mostrar()
        x = 100
        x = x.to_s(2)
        puts x

        y = "100 modelos"
        y = y.to_f
        puts y

        y = " tengo 100 modelos"
        y = y.to_f
        puts y

        z = "100"
        z = z.to_i
        puts z + 2
    end
end

conversion = Conversiones.new()
conversion.mostrar()

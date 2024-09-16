class Miclase
    def initialize
    end

    def arrays
        x = [5,2,3]
        y = ["Miguel",x,"elmejor"]

        puts y 
       

        k = [7,3,8]

        k.each do |a|
        puts a
        end

        puts "\n"

        j = [5,4,3,3,3,3,3,3,1]

        puts j[1]
        puts j[-1]
        puts j[-2]
        puts j[15]
        puts j.length

        l = [32,6,9,24]
        puts l.sort
        puts l.length
        puts l.first
        puts l.last


        s = [9,3,8]
        d = [3,8,7]
        puts "\n"
        puts s - d

        len = ["python","php","javascript","ruby"]
        len[3] = "sql"
        len[4] = "java"
        puts len

        puts "\n"

        nombres1 = %w{20.5 8 [true,false]}
        puts nombres1

        ciudades = %w{ Pune Mumbai Bangalore }
        ciudades.delete('Mumbai')
        ciudades.each do |ciudad|
            puts '¡Me gustaba '+ciudad+'!'
            puts '¿A ti ya no?'
        end

    end

    def par_impar
        array = [5,8,54,3,1]
        array.each do |num|
            if num % 2 == 0
                puts "El númmero #{num} es par"
            else
                puts "El númmero #{num} es impar"
                
            end
        end
    end
end

array = Miclase.new
array.par_impar


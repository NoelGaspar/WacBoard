function val=str2hex(str)
    val=0;
    if str=='a'
        val=10;
    elseif str=='b'
            val=11;
    elseif str=='c'
            val=12;
    elseif str=='d'
            val=13;
    elseif str=='e'
            val=14;
    elseif str=='f'
            val=15;
    else     
        val=str2num(str);
    end
   
end
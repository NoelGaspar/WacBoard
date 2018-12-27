latex pucthesis_template
bibtex pucthesis_template
latex pucthesis_template
latex pucthesis_template
latex pucthesis_sample
bibtex pucthesis_sample
latex pucthesis_sample
latex pucthesis_sample
@REM dvips -t letter -Ppdf -G0 thpres.dvi -o thpres.ps
@dvips -t letter -t landscape thpres.dvi -o thpres.ps
dvips -t letter -Ppdf -G0 pucthesis_template.dvi -o pucthesis_template.ps
dvips -t letter -Ppdf -G0 pucthesis_sample.dvi -o pucthesis_sample.ps
@REM ps2pdf -sPAPERSIZE=letter thpres.ps thpres.pdf
@REM ps2pdf -sPAPERSIZE#letter -dPDFSETTINGS=/default pucthesis_sample.ps
ps2pdf -sPAPERSIZE#letter -dEmbedAllFonts#true -dPDFSETTINGS#/prepress pucthesis_template.ps pucthesis_template.pdf
ps2pdf -sPAPERSIZE#letter -dEmbedAllFonts#true -dPDFSETTINGS#/prepress pucthesis_sample.ps pucthesis_sample.pdf
@REM clean stuff
del *.aux
del *.toc
del *.lof
del *.lot
del *.log
del *.dvi
del *.bbl
del *.blg
del pucthesis*.ps
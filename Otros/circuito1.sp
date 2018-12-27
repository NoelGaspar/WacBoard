Primer cicuito
.param Vin=1v
Vin Vin 0 pwl( 	0 		0
+				1m		0
+				1.001m 'Vin'
+				2m		'vin'
+				2.001m	0)
R1 Vin Vout 100k
C1 Vout 0 1n
.tran 4m
.end

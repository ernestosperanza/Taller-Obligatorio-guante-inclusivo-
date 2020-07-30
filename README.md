# Guante Inclusivo

<img src="/img/guante1.jpeg" alt="Guante1" width="350px" height="550px">

### DESCRIPCIÓN BREVE
El siguiente trabajo muestra el desarrollo del trabajo entregable obligatorio de la materia Taller de tecnologías 
de la Licenciatura en Sistemas de la Universidad ORT del Uruguay (Grupo N1A). 
Se realizar un guante traductor de lenguaje de señas mediante Arduino. (Paula Olivera, Juan José Reboledo López, Ernesto Speranza)

### Listado de componentes:
* Arduino UNO (1)
* Protoboard (1)
* Jumpers
* Cables
* Flex Sensor (5)
* Resistencia 10k ohm (5)

#### El por qué:
Luego de debatir respecto a qué proyecto encarar el equipo decidió atacar una problemática social. Desde el punto de vista cuantitativo se consideran números oficiales de la OMS, en el que existen a nivel mundial 360 millones de personas con sordera, aunque se considera que puede haber un sub-registro de esta población. El 5% de los 360 millones mencionados anteriormente corresponde a menores de edad.
Desde un aspecto cualitativo, consideramos que la tecnología puede brindar herramientas para facilitar la comunicación de las personas afectadas por sordera, o sordomudos, en su vida diaria. Si bien la tecnología ya ha avanzado bastante en herramientas de comunicación, y ha brindado a las personas con problemas de audición o habla un sin fin de mejoras (comenzando por los mensajes de texto), consideramos pertinente seguir profundizando en el acortamiento de la brecha comunicacional existente entre la población general y aquellos individuos que presentan inconvenientes de audición o habla [1].
#### La solución:
un guante que identifica los movimientos de la mano y los reproduce en texto o audio, con el objetivo de crear escenarios inclusivos para las personas con diferentes capacidades del habla y auditiva. El prototipo a mostrarse tendrá la capacidad de, mediante posiciones de la mano y se los dedos, utilizando un sensor Flex para cada dedo y un velocimetro para la mano, de identificar las letras que el usuario intenta representar considerando para esto el lenguaje de señas.


### Problemas encontrados durante el desarrollo y sus soluciones:
El primer inconveniente identificado fue la falta de sensores Flex en el mercado nacional, lo que implicó la realización de la compra a un proveedor en USA, qué, si bien se utilizó el método de envió más rápido, genero un impacto sobre el tiempo para trabajar directamente en el proyecto, ya que en nuestro planteo queríamos hacer un armado físico del prototipo. La segunda dificultad observada fue que al momento de trabajar con los Flex uno de ellos presentaba fallas en los valores devueltos y por tanto no hacia posible su utilización en el proyecto. La solución fue prescindir del sensor correspondiente al dedo meñique y ajustar el código para realizar cada vocal y mostrarlas en la consola sin involucrar el faltante en el guante.
A su vez, para simplificar el proyecto se optó por no utilizar el velocímetro y el módulo de Bluethoot, ya que el velocímetro no era un componente requerido para la complejidad del proyecto ejecutado, y se prefiero, en relación al módulo de Blueyhoot, hacer una conexión mediante cableado.
El proyecto original presentaba, por tanto, los siguientes componentes (De los cuales, como se mencionó anteriormente, fueron removidos el HC-05 Bluetooth Module y el Adafruit Analog Accelerometer: 
* ADXL335:
* Arduino UNO (1) 
* Protoboard (1) 
* Jumpers Cables
* HC-05 Bluetooth Module
* Flex Sensor (5)
* Adafruit Analog Accelerometer: ADXL335 
* Resistencia 10k ohm (5)


### Funcionalidades del prototipo:
El prototipo tiene la funcionalidad de, mediante las señas realizadas por el usuario del guante, considerando la lectura de la flexión de cada sensor involucrado, generar una vocal en la consola.
Diagrama de conexiones:
A modo explicativo, se conectaron 5 sensores flex a pines analógicos del Arduino pasando primero por la ProtoBoard y de ahí conectados a una resistencia cada uno. A su vez se conectó a GND cada flex utilizando la ProtoBorad de por medio.


### Posibles mejoras:
Las posibles mejoras a hacerle al proyecto se relacionan, en primer lugar, con algunas de las limitaciones que existieron durante el desarrollo del prototipo. La utilización de los componentes HC-05 Bluetooth Module y el Adafruit Analog Accelerometer: ADXL335 permitirían interpretar movimientos de la posición de la mano para interpretar palabras o expresiones, así como permitir al usuario más autonomía en lugar de la conexión cableada. A su vez, en caso de contar con los 5 flexores, el abanico de señas que reflejen el lenguaje de señas queda altamente incrementado en relación al uso de 4 flexores.
Potencialmente, cómo ideas de mejora, el Guante inclusivo podría tener conectividad con un teléfono móvil y traducir no solo a texto sino a audio lo que el usuario busca comunicar.

### Imágenes:
<img src="/img/guante2.jpeg" alt="Guante2" width="550px" height="350px">
<img src="/img/guante3.jpeg" alt="Guante3" width="550px" height="350px">

Links a los videos:

[Video de la problemática](https://www.youtube.com/watch?v=-tk456KQ93I&feature=youtu.be) <br/>
[Video del demo](https://www.youtube.com/watch?v=2XtYoKZ3WLk) <br/>



Referencias: <br/>
[[1] Orgnización mundial de la salud, «who.int,» 2011](https://www.who.int/disabilities/world_report/2011/report/en/)

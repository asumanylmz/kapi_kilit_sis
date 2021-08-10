# kapi_kilit_sis
KAPI KİLİT SİSTEMİ

- Projenin amacı : Belirlenen şifreye göre kilidi açmak
-Kullanılan Entegre : 16f877 
-Kullanılan Program : CCS C Compiler  -  Proteus 

Projede Yaptıklarım

1- Proteus ile tasarımı yaptım . Entegreyi oluşturdum  keypad ve lcd ekledim entegre ile olan baglantılarını kurdum.

2- CCS C de  iki tane dizi oluşturdum .Birinci dizi  dışardan girilen şifreyi tutuyor diğer dizi giriş yapmak için önceki dizideki şifre ile karşılaştırmak için oluşturdum.

3- Keypad’e gelen her ikili kombinasyon için bir şart oluşturdum ve keypad’de basılan değeri lcd’de yazdırdım.Bu giriş için bir şifre oluşturmuş oldu ve bu şifreyi birinci diziye attım.

4- Girilen şifreyi görmek için keypad’de on tuşuna basınca göstermesi için bir fonksiyon daha yazdım 

5- Daha sonra giriş yapmak için yeni bir fonksiyon oluşturdum ve burda girdiğim şifreyi de ikinci diziye atadım daha sonra birinci dizi ile ikinci dizinin elemanlarını karşılaştırdım.

6- While döngüsünde bu oluşturduğum fonksiyonları çağırdım.

7- Önce dışardan giriş yaparak şifre belirliyor daha sonra belirlediği şifreyi görüyor sonrasında giriş için yeni bir şifre giriyor ve belirlenen şifre ile karşılaştırılıyor şifreler başarılı ise başarlı mesajını lcd ‘de yazdırıyor

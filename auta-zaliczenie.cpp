<html>
<head>
<title>auta-zaliczenie.cpp</title>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<style type="text/css">
.s0 { color: #b3ae60;}
.s1 { color: #bcbec4;}
.s2 { color: #6aab73;}
.s3 { color: #2aacb8;}
.s4 { color: #cf8e6d;}
.s5 { color: #bcbec4;}
</style>
</head>
<body bgcolor="#1e1f22">
<table CELLSPACING=0 CELLPADDING=5 COLS=1 WIDTH="100%" BGCOLOR="#606060" >
<tr><td><center>
<font face="Arial, Helvetica" color="#000000">
auta-zaliczenie.cpp</font>
</center></td></tr></table>
<pre><span class="s0">#include </span><span class="s2">&lt;cstdio&gt;</span>
<span class="s0">#include </span><span class="s2">&lt;cstring&gt;</span>

<span class="s0">#define </span><span class="s1">MAX_CARS </span><span class="s3">20</span>
<span class="s0">#define </span><span class="s1">MAX_INFO </span><span class="s3">200</span>

<span class="s4">struct </span><span class="s1">Car </span><span class="s5">{</span>
    <span class="s4">char </span><span class="s1">description</span><span class="s5">[</span><span class="s1">MAX_INFO</span><span class="s5">];</span>
<span class="s5">};</span>

<span class="s4">void </span><span class="s1">Menu</span><span class="s5">() {</span>
    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;</span><span class="s4">\n</span><span class="s2">Rejestr aut</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;1. Dodaj samochod </span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;2. Wyswietl informacje o samochodach</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;3. Dodaj informacje o samochodzie</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;4. Zapisz auta w pliku</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;5. Wczytaj auta z pliku</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;0. Wyjdz</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Wybierz opcje: &quot;</span><span class="s5">);</span>
<span class="s5">}</span>

<span class="s4">void </span><span class="s1">Cars</span><span class="s5">(</span><span class="s1">Car cars</span><span class="s5">[], </span><span class="s4">int </span><span class="s1">count</span><span class="s5">) {</span>
    <span class="s4">if </span><span class="s5">(</span><span class="s1">count </span><span class="s5">== </span><span class="s3">0</span><span class="s5">) {</span>
        <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Brak zarejestrowanych samochodow.</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
        <span class="s4">return</span><span class="s5">;</span>
    <span class="s5">}</span>
    <span class="s4">for </span><span class="s5">(</span><span class="s4">int </span><span class="s1">i </span><span class="s5">= </span><span class="s3">0</span><span class="s5">; </span><span class="s1">i </span><span class="s5">&lt; </span><span class="s1">count</span><span class="s5">; ++</span><span class="s1">i</span><span class="s5">) {</span>
        <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;%d. %s</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">, </span><span class="s1">i </span><span class="s5">+ </span><span class="s3">1</span><span class="s5">, </span><span class="s1">cars</span><span class="s5">[</span><span class="s1">i</span><span class="s5">].</span><span class="s1">description</span><span class="s5">);</span>
    <span class="s5">}</span>
<span class="s5">}</span>

<span class="s4">void </span><span class="s1">AddInfo</span><span class="s5">(</span><span class="s1">Car</span><span class="s5">&amp; </span><span class="s1">car</span><span class="s5">) {</span>
    <span class="s4">char </span><span class="s1">extraInfo</span><span class="s5">[</span><span class="s3">100</span><span class="s5">];</span>
    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Wpisz dodatkowe informacje: &quot;</span><span class="s5">);</span>
    <span class="s1">fgets</span><span class="s5">(</span><span class="s1">extraInfo</span><span class="s5">, </span><span class="s4">sizeof</span><span class="s5">(</span><span class="s1">extraInfo</span><span class="s5">), </span><span class="s1">stdin</span><span class="s5">);</span>
    <span class="s1">size_t len </span><span class="s5">= </span><span class="s1">strlen</span><span class="s5">(</span><span class="s1">extraInfo</span><span class="s5">);</span>
    <span class="s4">if </span><span class="s5">(</span><span class="s1">len </span><span class="s5">&gt; </span><span class="s3">0 </span><span class="s5">&amp;&amp; </span><span class="s1">extraInfo</span><span class="s5">[</span><span class="s1">len </span><span class="s5">- </span><span class="s3">1</span><span class="s5">] == </span><span class="s2">'</span><span class="s4">\n</span><span class="s2">'</span><span class="s5">) {</span>
        <span class="s1">extraInfo</span><span class="s5">[</span><span class="s1">len </span><span class="s5">- </span><span class="s3">1</span><span class="s5">] = </span><span class="s2">'</span><span class="s4">\0</span><span class="s2">'</span><span class="s5">;</span>
    <span class="s5">}</span>
    <span class="s1">strncat</span><span class="s5">(</span><span class="s1">car</span><span class="s5">.</span><span class="s1">description</span><span class="s5">, </span><span class="s2">&quot; | &quot;</span><span class="s5">, </span><span class="s1">MAX_INFO </span><span class="s5">- </span><span class="s1">strlen</span><span class="s5">(</span><span class="s1">car</span><span class="s5">.</span><span class="s1">description</span><span class="s5">) - </span><span class="s3">1</span><span class="s5">);</span>
    <span class="s1">strncat</span><span class="s5">(</span><span class="s1">car</span><span class="s5">.</span><span class="s1">description</span><span class="s5">, </span><span class="s1">extraInfo</span><span class="s5">, </span><span class="s1">MAX_INFO </span><span class="s5">- </span><span class="s1">strlen</span><span class="s5">(</span><span class="s1">car</span><span class="s5">.</span><span class="s1">description</span><span class="s5">) - </span><span class="s3">1</span><span class="s5">);</span>
    <span class="s5">}</span>


<span class="s4">int </span><span class="s1">savecartofile</span><span class="s5">(</span><span class="s1">Car cars</span><span class="s5">[], </span><span class="s4">int </span><span class="s1">count</span><span class="s5">) {</span>
    <span class="s1">FILE </span><span class="s5">*</span><span class="s1">fptr </span><span class="s5">= </span><span class="s1">fopen</span><span class="s5">(</span><span class="s2">&quot;C:</span><span class="s4">\\</span><span class="s2">auta</span><span class="s4">\\</span><span class="s2">auta.txt&quot;</span><span class="s5">, </span><span class="s2">&quot;w&quot;</span><span class="s5">);</span>
    <span class="s4">if </span><span class="s5">(</span><span class="s1">fptr </span><span class="s5">== </span><span class="s1">NULL</span><span class="s5">) {</span>
        <span class="s4">return </span><span class="s3">1</span><span class="s5">;</span>
    <span class="s5">}</span>
    <span class="s4">for </span><span class="s5">(</span><span class="s4">int </span><span class="s1">i </span><span class="s5">= </span><span class="s3">0</span><span class="s5">; </span><span class="s1">i </span><span class="s5">&lt; </span><span class="s1">count</span><span class="s5">; ++</span><span class="s1">i</span><span class="s5">) {</span>
        <span class="s1">fprintf</span><span class="s5">(</span><span class="s1">fptr</span><span class="s5">, </span><span class="s2">&quot;%s&quot;</span><span class="s5">, </span><span class="s1">cars</span><span class="s5">[</span><span class="s1">i</span><span class="s5">].</span><span class="s1">description</span><span class="s5">);</span>
    <span class="s5">}</span>
    <span class="s1">fclose</span><span class="s5">(</span><span class="s1">fptr</span><span class="s5">);</span>
    <span class="s4">return </span><span class="s3">0</span><span class="s5">;</span>
<span class="s5">}</span>

<span class="s4">int </span><span class="s1">restorecarfromfile</span><span class="s5">(</span><span class="s1">Car cars</span><span class="s5">[], </span><span class="s4">int</span><span class="s5">* </span><span class="s1">count</span><span class="s5">) {</span>
    <span class="s1">FILE </span><span class="s5">*</span><span class="s1">fptr </span><span class="s5">= </span><span class="s1">fopen</span><span class="s5">(</span><span class="s2">&quot;C:</span><span class="s4">\\</span><span class="s2">auta</span><span class="s4">\\</span><span class="s2">auta.txt&quot;</span><span class="s5">, </span><span class="s2">&quot;r&quot;</span><span class="s5">);</span>
    <span class="s4">if </span><span class="s5">(</span><span class="s1">fptr </span><span class="s5">== </span><span class="s1">NULL</span><span class="s5">) {</span>
        <span class="s4">return </span><span class="s3">1</span><span class="s5">;</span>
    <span class="s5">}</span>

    <span class="s4">int </span><span class="s1">i </span><span class="s5">= </span><span class="s3">0</span><span class="s5">;</span>
    <span class="s4">while </span><span class="s5">(</span><span class="s1">i </span><span class="s5">&lt; </span><span class="s1">MAX_CARS </span><span class="s5">&amp;&amp; </span><span class="s1">fgets</span><span class="s5">(</span><span class="s1">cars</span><span class="s5">[</span><span class="s1">i</span><span class="s5">].</span><span class="s1">description</span><span class="s5">, </span><span class="s1">MAX_INFO</span><span class="s5">, </span><span class="s1">fptr</span><span class="s5">)) {</span>
        <span class="s1">size_t len </span><span class="s5">= </span><span class="s1">strlen</span><span class="s5">(</span><span class="s1">cars</span><span class="s5">[</span><span class="s1">i</span><span class="s5">].</span><span class="s1">description</span><span class="s5">);</span>
        <span class="s4">if </span><span class="s5">(</span><span class="s1">len </span><span class="s5">&gt; </span><span class="s3">0 </span><span class="s5">&amp;&amp; </span><span class="s1">cars</span><span class="s5">[</span><span class="s1">i</span><span class="s5">].</span><span class="s1">description</span><span class="s5">[</span><span class="s1">len </span><span class="s5">- </span><span class="s3">1</span><span class="s5">] != </span><span class="s2">'</span><span class="s4">\n</span><span class="s2">'</span><span class="s5">) {</span>
            <span class="s1">strcat</span><span class="s5">(</span><span class="s1">cars</span><span class="s5">[</span><span class="s1">i</span><span class="s5">].</span><span class="s1">description</span><span class="s5">, </span><span class="s2">&quot;</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
        <span class="s5">}</span>
        <span class="s1">i</span><span class="s5">++;</span>
    <span class="s5">}</span>

    <span class="s5">*</span><span class="s1">count </span><span class="s5">= </span><span class="s1">i</span><span class="s5">;</span>
    <span class="s1">fclose</span><span class="s5">(</span><span class="s1">fptr</span><span class="s5">);</span>
    <span class="s4">return </span><span class="s3">0</span><span class="s5">;</span>
<span class="s5">}</span>

<span class="s4">int </span><span class="s1">main</span><span class="s5">() {</span>
    <span class="s1">Car cars</span><span class="s5">[</span><span class="s1">MAX_CARS</span><span class="s5">];</span>
    <span class="s4">int </span><span class="s1">carCount </span><span class="s5">= </span><span class="s3">0</span><span class="s5">;</span>
    <span class="s4">int </span><span class="s1">option </span><span class="s5">= </span><span class="s3">0</span><span class="s5">;</span>

    <span class="s4">do </span><span class="s5">{</span>
        <span class="s1">Menu</span><span class="s5">();</span>
        <span class="s1">scanf</span><span class="s5">(</span><span class="s2">&quot;%d&quot;</span><span class="s5">, &amp;</span><span class="s1">option</span><span class="s5">);</span>
        <span class="s1">getchar</span><span class="s5">();</span>
        <span class="s4">int </span><span class="s1">errorcode </span><span class="s5">= </span><span class="s3">0</span><span class="s5">;</span>
        <span class="s4">switch </span><span class="s5">(</span><span class="s1">option</span><span class="s5">) {</span>
            <span class="s4">case </span><span class="s3">1</span><span class="s1">:</span>
                <span class="s4">if </span><span class="s5">(</span><span class="s1">carCount </span><span class="s5">&gt;= </span><span class="s1">MAX_CARS</span><span class="s5">) {</span>
                    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Osiągnieto maksymalną liczbę samochodow!</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
                <span class="s5">} </span><span class="s4">else </span><span class="s5">{</span>
                    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Podaj marke i model samochodu: &quot;</span><span class="s5">);</span>
                    <span class="s1">fgets</span><span class="s5">(</span><span class="s1">cars</span><span class="s5">[</span><span class="s1">carCount</span><span class="s5">].</span><span class="s1">description</span><span class="s5">, </span><span class="s1">MAX_INFO</span><span class="s5">, </span><span class="s1">stdin</span><span class="s5">);</span>
                    <span class="s1">size_t len </span><span class="s5">= </span><span class="s1">strlen</span><span class="s5">(</span><span class="s1">cars</span><span class="s5">[</span><span class="s1">carCount</span><span class="s5">].</span><span class="s1">description</span><span class="s5">);</span>
                    <span class="s4">if </span><span class="s5">(</span><span class="s1">len </span><span class="s5">&gt; </span><span class="s3">0 </span><span class="s5">&amp;&amp; </span><span class="s1">cars</span><span class="s5">[</span><span class="s1">carCount</span><span class="s5">].</span><span class="s1">description</span><span class="s5">[</span><span class="s1">len </span><span class="s5">- </span><span class="s3">1</span><span class="s5">] == </span><span class="s2">'</span><span class="s4">\n</span><span class="s2">'</span><span class="s5">) {</span>
                        <span class="s1">cars</span><span class="s5">[</span><span class="s1">carCount</span><span class="s5">].</span><span class="s1">description</span><span class="s5">[</span><span class="s1">len </span><span class="s5">- </span><span class="s3">1</span><span class="s5">] = </span><span class="s2">'</span><span class="s4">\0</span><span class="s2">'</span><span class="s5">;</span>
                    <span class="s5">}</span>
                    <span class="s1">carCount</span><span class="s5">++;</span>
                    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Samochod dodany.</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
                <span class="s5">}</span>
                <span class="s4">break</span><span class="s5">;</span>

            <span class="s4">case </span><span class="s3">2</span><span class="s1">:</span>
                <span class="s1">Cars</span><span class="s5">(</span><span class="s1">cars</span><span class="s5">, </span><span class="s1">carCount</span><span class="s5">);</span>
                <span class="s4">break</span><span class="s5">;</span>

            <span class="s4">case </span><span class="s3">3</span><span class="s1">:</span>
                <span class="s1">Cars</span><span class="s5">(</span><span class="s1">cars</span><span class="s5">, </span><span class="s1">carCount</span><span class="s5">);</span>
                <span class="s4">if </span><span class="s5">(</span><span class="s1">carCount </span><span class="s5">== </span><span class="s3">0</span><span class="s5">) </span><span class="s4">break</span><span class="s5">;</span>
                <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Podaj numer samochodu, do ktorego chcesz dodac informacje: &quot;</span><span class="s5">);</span>
                <span class="s4">int </span><span class="s1">index</span><span class="s5">;</span>
                <span class="s1">scanf</span><span class="s5">(</span><span class="s2">&quot;%d&quot;</span><span class="s5">, &amp;</span><span class="s1">index</span><span class="s5">);</span>
                <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Podaj jaka informacje chcesz dodac: &quot;</span><span class="s5">);</span>

                <span class="s1">getchar</span><span class="s5">();</span>
                <span class="s4">if </span><span class="s5">(</span><span class="s1">index </span><span class="s5">&gt;= </span><span class="s3">1 </span><span class="s5">&amp;&amp; </span><span class="s1">index </span><span class="s5">&lt;= </span><span class="s1">carCount</span><span class="s5">) {</span>
                    <span class="s1">AddInfo</span><span class="s5">(</span><span class="s1">cars</span><span class="s5">[</span><span class="s1">index </span><span class="s5">- </span><span class="s3">1</span><span class="s5">]);</span>
                    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Informacja dodana.</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
                <span class="s5">} </span><span class="s4">else </span><span class="s5">{</span>
                    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Niepoprawny numer samochodu.</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
                <span class="s5">}</span>
                <span class="s4">break</span><span class="s5">;</span>
            <span class="s4">case </span><span class="s3">4</span><span class="s1">:</span>
                <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Zapisuje auta do pliku</span><span class="s4">\n\n</span><span class="s2">&quot;</span><span class="s5">);</span>
                <span class="s1">errorcode </span><span class="s5">= </span><span class="s1">savecartofile</span><span class="s5">(</span><span class="s1">cars</span><span class="s5">, </span><span class="s1">carCount</span><span class="s5">);</span>
                <span class="s4">if </span><span class="s5">(!</span><span class="s1">errorcode</span><span class="s5">) {</span>
                    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Auta zapisane</span><span class="s4">\n\n</span><span class="s2">&quot;</span><span class="s5">);</span>
                <span class="s5">} </span><span class="s4">else </span><span class="s5">{</span>
                    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Auta nie zapisane</span><span class="s4">\n\n</span><span class="s2">&quot;</span><span class="s5">);</span>
                <span class="s5">}</span>
                <span class="s4">break</span><span class="s5">;</span>
            <span class="s4">case </span><span class="s3">5</span><span class="s1">:</span>
                <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Wczytuje auta z pliku</span><span class="s4">\n\n</span><span class="s2">&quot;</span><span class="s5">);</span>
                <span class="s1">errorcode </span><span class="s5">= </span><span class="s1">restorecarfromfile</span><span class="s5">(</span><span class="s1">cars</span><span class="s5">, &amp;</span><span class="s1">carCount</span><span class="s5">);</span>
                <span class="s4">if </span><span class="s5">(!</span><span class="s1">errorcode</span><span class="s5">) {</span>
                    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Auta wczytane</span><span class="s4">\n\n</span><span class="s2">&quot;</span><span class="s5">);</span>
                <span class="s5">} </span><span class="s4">else </span><span class="s5">{</span>
                    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Auta nie wczytane</span><span class="s4">\n\n</span><span class="s2">&quot;</span><span class="s5">);</span>
                <span class="s5">}</span>
                <span class="s4">break</span><span class="s5">;</span>
            <span class="s4">case </span><span class="s3">0</span><span class="s1">:</span>
                <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Zamykanie programu...</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
                <span class="s4">break</span><span class="s5">;</span>
            <span class="s4">default</span><span class="s1">:</span>
                <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Niepoprawna opcja!</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
        <span class="s5">}</span>

    <span class="s5">} </span><span class="s4">while </span><span class="s5">(</span><span class="s1">option </span><span class="s5">!= </span><span class="s3">0</span><span class="s5">);</span>

    <span class="s4">return </span><span class="s3">0</span><span class="s5">;</span>
<span class="s5">}</span></pre>
</body>
</html>
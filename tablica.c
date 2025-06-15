<html>
<head>
<title>main.cpp</title>
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
main.cpp</font>
</center></td></tr></table>
<pre><span class="s0">#include </span><span class="s2">&lt;iostream&gt;</span>
<span class="s0">#define </span><span class="s1">SIZE </span><span class="s3">10</span>

        <span class="s4">void </span><span class="s1">printarray</span><span class="s5">(</span><span class="s4">int </span><span class="s1">array</span><span class="s5">[], </span><span class="s4">int </span><span class="s1">size</span><span class="s5">) {</span>
            <span class="s4">for </span><span class="s5">(</span><span class="s4">int </span><span class="s1">i </span><span class="s5">= </span><span class="s3">0</span><span class="s5">; </span><span class="s1">i </span><span class="s5">&lt; </span><span class="s1">size</span><span class="s5">; ++</span><span class="s1">i</span><span class="s5">) {</span>
                <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;array[%d] = %d</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">, </span><span class="s1">i</span><span class="s5">, </span><span class="s1">array</span><span class="s5">[</span><span class="s1">i</span><span class="s5">]);</span>
            <span class="s5">}</span>
        <span class="s5">}</span>
<span class="s4">void </span><span class="s1">menu</span><span class="s5">(</span><span class="s4">void</span><span class="s5">) {</span>
    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;1. Wygeneruj liczby w tablicy</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;2. Wyswietl liczby z tablicy</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;3. Wyswietl najnizszom wartosc</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;4. Wyswietl najwyszom wartosc</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;5. Wyswietl sredniom wartosc</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;0. Zakoncz</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Wybierz opcje</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>
<span class="s5">}</span>

<span class="s4">int </span><span class="s1">findminimum </span><span class="s5">(</span><span class="s4">int </span><span class="s1">array</span><span class="s5">[], </span><span class="s4">int </span><span class="s1">size</span><span class="s5">) {</span>
    <span class="s4">int </span><span class="s1">minimum </span><span class="s5">= </span><span class="s1">array</span><span class="s5">[</span><span class="s3">0</span><span class="s5">];</span>
    <span class="s4">for </span><span class="s5">(</span><span class="s4">int </span><span class="s1">i </span><span class="s5">= </span><span class="s3">0</span><span class="s5">; </span><span class="s1">i </span><span class="s5">&lt; </span><span class="s1">size</span><span class="s5">; ++</span><span class="s1">i</span><span class="s5">) {</span>
        <span class="s4">if </span><span class="s5">(</span><span class="s1">array</span><span class="s5">[</span><span class="s1">i</span><span class="s5">] &lt; </span><span class="s1">minimum</span><span class="s5">) {</span>
            <span class="s1">minimum </span><span class="s5">= </span><span class="s1">array</span><span class="s5">[</span><span class="s1">i</span><span class="s5">];</span>
        <span class="s5">}</span>
    <span class="s5">}</span>
    <span class="s4">return </span><span class="s1">minimum</span><span class="s5">;</span>
<span class="s5">}</span>
<span class="s4">int </span><span class="s1">findmaximum </span><span class="s5">(</span><span class="s4">int </span><span class="s1">array</span><span class="s5">[], </span><span class="s4">int </span><span class="s1">size</span><span class="s5">) {</span>
    <span class="s4">int </span><span class="s1">maximum </span><span class="s5">= </span><span class="s1">array</span><span class="s5">[</span><span class="s3">0</span><span class="s5">];</span>
    <span class="s4">for </span><span class="s5">(</span><span class="s4">int </span><span class="s1">i </span><span class="s5">= </span><span class="s3">0</span><span class="s5">; </span><span class="s1">i </span><span class="s5">&lt; </span><span class="s1">size</span><span class="s5">; ++</span><span class="s1">i</span><span class="s5">) {</span>
        <span class="s4">if </span><span class="s5">(</span><span class="s1">array</span><span class="s5">[</span><span class="s1">i</span><span class="s5">] &gt; </span><span class="s1">maximum</span><span class="s5">) {</span>
            <span class="s1">maximum </span><span class="s5">= </span><span class="s1">array</span><span class="s5">[</span><span class="s1">i</span><span class="s5">];</span>
        <span class="s5">}</span>
    <span class="s5">}</span>
    <span class="s4">return </span><span class="s1">maximum</span><span class="s5">;</span>
<span class="s5">}</span>
<span class="s4">float </span><span class="s1">calculateAverage </span><span class="s5">(</span><span class="s4">int </span><span class="s1">array</span><span class="s5">[], </span><span class="s4">int </span><span class="s1">size</span><span class="s5">) {</span>
    <span class="s4">int </span><span class="s1">sum </span><span class="s5">= </span><span class="s3">0</span><span class="s5">;</span>
    <span class="s4">for </span><span class="s5">(</span><span class="s4">int </span><span class="s1">i </span><span class="s5">= </span><span class="s3">0</span><span class="s5">; </span><span class="s1">i </span><span class="s5">&lt; </span><span class="s1">size</span><span class="s5">; ++</span><span class="s1">i</span><span class="s5">) {</span>
        <span class="s1">sum </span><span class="s5">+= </span><span class="s1">array</span><span class="s5">[</span><span class="s1">i</span><span class="s5">];</span>
    <span class="s5">}</span>
    <span class="s4">return </span><span class="s5">(</span><span class="s4">float</span><span class="s5">) </span><span class="s1">sum </span><span class="s5">/ </span><span class="s1">size</span><span class="s5">;</span>
<span class="s5">}</span>


<span class="s4">int </span><span class="s1">main</span><span class="s5">() {</span>
    <span class="s4">int </span><span class="s1">array</span><span class="s5">[</span><span class="s1">SIZE</span><span class="s5">] {</span><span class="s3">1</span><span class="s5">, </span><span class="s3">2</span><span class="s5">, </span><span class="s3">3</span><span class="s5">, </span><span class="s3">4</span><span class="s5">, </span><span class="s3">5</span><span class="s5">, </span><span class="s3">6</span><span class="s5">, </span><span class="s3">7</span><span class="s5">, </span><span class="s3">8</span><span class="s5">, </span><span class="s3">9</span><span class="s5">, </span><span class="s3">10</span><span class="s5">};</span>
    <span class="s4">int </span><span class="s1">option </span><span class="s5">= </span><span class="s3">0</span><span class="s5">;</span>

    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Tablica</span><span class="s4">\n\n</span><span class="s2">&quot;</span><span class="s5">);</span>

    <span class="s4">do </span><span class="s5">{</span>
        <span class="s1">menu</span><span class="s5">();</span>
        <span class="s1">scanf</span><span class="s5">(</span><span class="s2">&quot;%d&quot;</span><span class="s5">, &amp;</span><span class="s1">option</span><span class="s5">);</span>

        <span class="s4">switch </span><span class="s5">(</span><span class="s1">option</span><span class="s5">) {</span>
            <span class="s4">case </span><span class="s3">0</span><span class="s5">:</span>
                <span class="s4">break</span><span class="s5">;</span>
            <span class="s4">case </span><span class="s3">1</span><span class="s5">:</span>
                <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;cos</span><span class="s4">\n\n</span><span class="s2">&quot;</span><span class="s5">);</span>
                <span class="s4">break</span><span class="s5">;</span>
            <span class="s4">case </span><span class="s3">2</span><span class="s5">:</span>
                <span class="s1">printarray</span><span class="s5">(</span><span class="s1">array</span><span class="s5">, </span><span class="s1">SIZE</span><span class="s5">);</span>
                <span class="s4">break</span><span class="s5">;</span>
            <span class="s4">case </span><span class="s3">3</span><span class="s5">:</span>
                <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Najnizsza wartosc: %d</span><span class="s4">\n\n</span><span class="s2">&quot;</span><span class="s5">, </span><span class="s1">findminimum</span><span class="s5">(</span><span class="s1">array</span><span class="s5">, </span><span class="s1">SIZE</span><span class="s5">));</span>
                <span class="s4">break</span><span class="s5">;</span>
            <span class="s4">case </span><span class="s3">4</span><span class="s5">:</span>
                <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Najwieksza wartosc: %d</span><span class="s4">\n\n</span><span class="s2">&quot;</span><span class="s5">, </span><span class="s1">findmaximum</span><span class="s5">(</span><span class="s1">array</span><span class="s5">, </span><span class="s1">SIZE</span><span class="s5">));</span>
                <span class="s4">break</span><span class="s5">;</span>
            <span class="s4">case </span><span class="s3">5</span><span class="s5">:</span>
                <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Srednia wartosc: %f</span><span class="s4">\n\n</span><span class="s2">&quot;</span><span class="s5">, </span><span class="s1">calculateAverage</span><span class="s5">(</span><span class="s1">array</span><span class="s5">, </span><span class="s1">SIZE</span><span class="s5">));</span>
                <span class="s4">break</span><span class="s5">;</span>
            <span class="s4">default</span><span class="s5">:</span>
                <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;Wybierz poprawna opcje</span><span class="s4">\n\n</span><span class="s2">&quot;</span><span class="s5">);</span>
        <span class="s5">}</span>

    <span class="s5">} </span><span class="s4">while </span><span class="s5">(</span><span class="s1">option </span><span class="s5">!= </span><span class="s3">0</span><span class="s5">);</span>

    <span class="s1">printf</span><span class="s5">(</span><span class="s2">&quot;koniec</span><span class="s4">\n</span><span class="s2">&quot;</span><span class="s5">);</span>

    <span class="s4">return </span><span class="s3">0</span><span class="s5">;</span>
<span class="s5">}</span></pre>
</body>
</html>
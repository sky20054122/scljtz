<h2><a href="[field:typeurl/]"><img src="[field:global.cfg_templets_skin/]/images/con_bot_l_tit.png" width="130" height="36" alt="[field:typename/]" /></a><span><a href="[field:typeurl/]"><img src="[field:global.cfg_templets_skin/]/images/con_bot_more.png" width="28" height="16" alt="更多" /></a></span></h2>
            <dl>
            	<dt><img src="[field:global.cfg_templets_skin/]/images/about.jpg" width="200" height="150" alt="关于我们" /></dt>
                <dd>
				{dede:sql sql='Select content,substring(content,1,300) as content from dede_arctype where id=7'}[field:content function='html2text(@me)'/]{/dede:sql}
				<p><script src='[field:global.cfg_cmsurl/]/plus/mytag_js.php?aid=1' language='javascript'></script>... <a href="[field:typeurl/]">详细内容>></a></p>
				</dd>
            </dl>
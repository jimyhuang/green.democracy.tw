<?php
require_once 'api/api.inc';
global $u;

//timeline
$string = file_get_contents("http://v.democracy.tw/{$u}/news.json");
$newsfeeds = json_decode($string,true);
$newsfeeds = $newsfeeds['nodes'];

//個人資料
$string = file_get_contents("http://v.democracy.tw/{$u}/site.json");
$user = json_decode($string,true);
$user = $user['nodes'][0]['node'];

//推薦
$string = file_get_contents("http://v.democracy.tw/{$u}/people.json");
$recommendation = json_decode($string,true);
$recommendation = $recommendation['nodes'];

shuffle($recommendation);


?><!DOCTYPE html>
<!--[if lt IE 7]>      <html class="no-js lt-ie9 lt-ie8 lt-ie7"> <![endif]-->
<!--[if IE 7]>         <html class="no-js lt-ie9 lt-ie8"> <![endif]-->
<!--[if IE 8]>         <html class="no-js lt-ie9"> <![endif]-->
<!--[if gt IE 8]><!--> <html class="no-js"> <!--<![endif]-->
    <head>
        <meta charset="utf-8">
        <!--[if IE]><meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1"><![endif]-->
        <meta content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no" name="viewport">
        <meta content="black" name="apple-mobile-web-app-status-bar-style">
        
        <title><?=$user['title']?> | 2014 綠黨政治代理人</title>
        <meta name="description" content="Enter Description">

         <link rel="stylesheet" type="text/css" href="/css/normalize.min.css">
         <link rel="stylesheet" type="text/css" href="/css/main.css?<?=time()?>">
         <link rel="stylesheet" type="text/css" href="/timeline/files/css/timeline_themegp.css?<?=time()?>" />

         <!-- Remove responsive.css is non-responsive needed -->
         <link rel="stylesheet" type="text/css" href="/css/responsive.css?<?=time()?>">
         <link rel="stylesheet" type="text/css" href="/css/flexslider.css">
         <link rel="stylesheet" type="text/css" href="/css/font-awesome.css">
         <link rel="stylesheet" type="text/css" href="/js/fancybox/jquery.fancybox.css?v=2.1.4" media="screen" />
         <link rel="stylesheet" type="text/css" href="/rs-plugin/css/settings.css" media="screen" />         
         <script src="/js/vendor/modernizr-2.6.2-respond-1.1.0.min.js"></script>         
         
    </head>
    <body>
    	
	<? require_once 'api/header.inc'; ?>
    	
    	
    <div class="outter-wrapper">	
    	 <!-- Start Main Body -->
        <div class="main-container">
            <div class="main wrapper clearfix">
            	<!-- Start Main Content -->				
            	
                <div class="main-content three-fourths">
				

				<!-- add here-->
				<h2>政見</h2>
				
				<hr>
				
				<ul class="issues toggle">
    	                		<!-- Toggle -->
    	                	    <li class="toggle-li">
    	                	      <a href="#" class="toggle-btn" hash-id="a1" id="sa1"><em class="icon-globe"></em> <span>堅決反對粗糙的自由貿易、多邊經貿協定，加速對在地經濟、農業與經濟體質的破壞</span></a>
    	                	      <div class="toggle-content">

    	                	      	<p>史上頭一遭由政黨舉辦的駭客松，預計透過一整天的寫程式/故事的具體行動，改變綠黨、改變政治。歡迎對於公民參與、政治變革、hacking 年底九合一選舉有興趣的朋友參加，不限綠黨黨員、專案不限只在綠黨選舉使用。時間：</p>

								<p><span class="issues-tags meta"><span class=" icon-tags"></span> 經濟、全球貿易、糧食、在地經濟<span></p>
    	                	      <div class=" issues-like fb-like" data-href="https://www.facebook.com/taiwangreenparty" data-layout="button_count" data-action="like" data-show-faces="false" data-share="false"></div>

    	                	      </div>
    	                	    </li>
    	                	    <!-- Toggle -->
    	                	    <li class="toggle-li">
    	                	      <a href="#" class="toggle-btn" hash-id="a2" id="sa2">My Credit Card Is Stuck In My Computer?</a>
    	                	      <div class="toggle-content">

	    	                	      <h6>Heading Six <span>Span</span></h6>
										<ol>
    			                       		<li>Cras justo odio, dapibus</li>
    	        		               		<li>Donec ullamcorper nulla non metus auctor fringilla</li>
    	        		               		<li>因為：
												<ol>
	    				                       		<li>Cras justo odio, dapibus</li>
    	        				               		<li>Donec ullamcorper nulla non metus auctor fringilla</li>
    	        				               	</ol>
    	        		               		</li>
    	        		               		
    	                		       	</ol>
    	                       		    	                	      
    	                	      	<p>Donec ullamcorper nulla non metus auctor fringilla. Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Cras mattis consectetur purus sit amet fermentum. Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit.</p>
    	                	      	
    	                	      	<p class="fluid-width-video-wrapper" style="height:100%; min-height:300px;"><iframe src="http://player.vimeo.com/video/51014619?color=ffffff" id="fitvid972851"></iframe></p>
    	                	      	
    	                	      	
    	                	      </div>
    	                	    </li>
    	                	    <!-- Toggle -->
    	                	    <li class="toggle-li">
    	                	      <a href="#" class="toggle-btn" hash-id="a3" id="sa3">Why Doesn’t The Earth Fall Down?</a>
    	                	      <div class="toggle-content">
    	                	      	<p>Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Etiam porta sem malesuada magna mollis euismod. Donec sed odio dui. Nullam quis risus eget urna mollis ornare vel eu leo. Lorem ipsum dolor sit amet, consectetur adipiscing elit.</p>
    	                	      	<p>Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Etiam porta sem malesuada magna mollis euismod. Donec sed odio dui. Nullam quis risus eget urna mollis ornare vel eu leo. Lorem ipsum dolor sit amet, consectetur adipiscing elit.</p>
    	                	      	<p>Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Etiam porta sem malesuada magna mollis euismod. Donec sed odio dui. Nullam quis risus eget urna mollis ornare vel eu leo. Lorem ipsum dolor sit amet, consectetur adipiscing elit.</p>
    	                	      	<p>Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Etiam porta sem malesuada magna mollis euismod. Donec sed odio dui. Nullam quis risus eget urna mollis ornare vel eu leo. Lorem ipsum dolor sit amet, consectetur adipiscing elit.</p>
    	                	      	<p>Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Etiam porta sem malesuada magna mollis euismod. Donec sed odio dui. Nullam quis risus eget urna mollis ornare vel eu leo. Lorem ipsum dolor sit amet, consectetur adipiscing elit.</p>
    	                	      	<p>Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Etiam porta sem malesuada magna mollis euismod. Donec sed odio dui. Nullam quis risus eget urna mollis ornare vel eu leo. Lorem ipsum dolor sit amet, consectetur adipiscing elit.</p>    	                	      	    	                	      	    	                	      	    	                	      	    	                	      	
    	                	      </div>
    	                	    </li>
    	                	    <!-- Toggle -->
    	                	    <li class="toggle-li">
    	                	      <a href="#" class="toggle-btn" hash-id="a4" id="sa4">How much wood could a Wood Chuck chuck?</a>
    	                	      <div class="toggle-content">
    	                	      	<p>Nullam id dolor id nibh ultricies vehicula ut id elit. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Praesent commodo cursus magna, vel scelerisque nisl consectetur et. Donec id elit non mi porta gravida at eget metus.</p>
    	                	      </div>
    	                	    </li>
    	                	    <!-- Toggle -->
    	                	    <li class="toggle-li">
    	                	      <a href="#" class="toggle-btn" hash-id="a5" id="sa5">Do toilets flush backwards in the southern hemisphere?</a>
    	                	      <div class="toggle-content">
    	                	      	<p>Donec ullamcorper nulla non metus auctor fringilla. Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Cras mattis consectetur purus sit amet fermentum. Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit.</p>
    	                	      </div>
    	                	    </li>
    	                	    <!-- Toggle -->
    	                	    <li class="toggle-li">
    	                	      <a href="#" class="toggle-btn"  hash-id="a6" id="sa6">Do blondes really have more fun?</a>
    	                	      <div class="toggle-content">
    	                	      	<p>Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Etiam porta sem malesuada magna mollis euismod. Donec sed odio dui. Nullam quis risus eget urna mollis ornare vel eu leo. Lorem ipsum dolor sit amet, consectetur adipiscing elit.</p>
    	                	      </div>
    	                	    </li>
    	                	  </ul>

				<!-- add here-->


                </div>
				
				
				
				<!-- Start Main Sidebar  -->
				<aside class="right-aside fourth last">
			    	
			    	<? if($user['issues']) { ?>
				    	<div class="clearfix aside-focus">
                			<h3><strong>政見主要關注</strong></h3>
                			<ul class="statistics">
                				<li><em class="icon-globe"></em> <span>全球化貿易</span></li>
                				<li><em class="icon-flag"></em> <span style="color:black;">性/別與同志</span></li>
                				<li><em class="icon-legal"></em> <span style="color:black;">法律與人權</span></li>
                			</ul>	
                			<p><a class="more">了解目前的政見</a></p>
                		</div>
				    <? } ?>
				    
				    	                		
			    	<? if($user['recommendation']) { ?>                		
                		<!-- Quote Widget -->
				    	<div class="clearfix aside-recom">
                			<h3><strong>各界推薦</strong></h3>
                			<blockquote><?=$recommendation[0]['node']['contents']?><cite>- <?=$recommendation[0]['node']['title']?></cite></blockquote>
                		</div>
					<? } ?>	
					
			    	<? if($user['fundraising']) { ?>                		
				    	<div class="clearfix aside-donate">
                			<h3><strong>募款</strong></h3>
                			<p>捐款的短話捐款的短話捐款的短話捐款的短話捐款的短話捐款的短話</p>

                			<ol class="graphs">
                				<li><div class="per-60 btn-style2"> 1,203,234<span>60%</span></div></li>                				
                			</ol>
                			                			
                			<a href="#" class="btn small-btn "><em class="icon-heart"></em>線上捐款</a><p></p>
                		</div>	

                	<hr>
					<? } ?>

			    	<? if($user['gotv']) { ?>                		

                		<!-- Email Signup Widget -->
				    	<div class="clearfix aside-signup">
                			<h3 id="promise"><strong>承諾 <span time="1417219200" class="petition_count kkcount-down"></span> 天後投票</strong></h3>
                			<p>登記為本選區的選民、訂閱且隨時關注<?=$user['title']?>最新消息，並承諾在 <span class="highlight">11/29</span> 一定去投票！</p>
                			<form id="contactform" class="quick-contact" action="php/processForm.php" method="post">                			
                				<table class="tableless">
                					<tr><td><input type="text" id="name" name="name" placeholder="姓名" /></td></tr>
                					<tr><td><input type="email"id="email" name="email" placeholder="Email" value="" /></td></tr>
                					<tr><td><input type="text" id="phone" name="phone" placeholder="手機號碼" value="" maxlength="10" /></td></tr>                					
                					<tr><td><input type="text" id="message" name="message" placeholder="選區，例如%高雄市三民區%"></td></tr>
                					<tr><td>
									<input name="button" class="btn small-btn" type="submit" value="送出" id="send" /><br/></td></tr>
                				</table>
                			</form>
                			<div id="response"></div>
                		</div>
                					    	
			    	<hr/>
					<? } ?>

			    	<? if($user['news']) { ?>                		

                		<!-- Start Text Widget -->     
				    	<div class="clearfix aside-news">
                			<h3><strong>相關新聞</strong></h3>
                			<div class="mosaic-block fade">
                				<a href="#" class="mosaic-overlay link" title="新聞標題"></a><div class="mosaic-backdrop">
                				<div class="corner-date">8/26</div><img src="/img/small_thumb3.jpg" alt="Mock" /></div>
                			</div>
                			<h3 class="title"><a href="#">新聞標題</a></h3>
                			<p>媒體曝光的消息媒體曝光的消息媒體曝光的消息媒體曝光的消息媒體曝光的消息媒體曝光的消息
                			&#8230;<a class="more">更多</a></p>
                		</div>
                		
                <hr class="aside-news">
                <? } ?>
                
                
				<? if($user['gallery']) { ?>                		                		
			    	<!-- Start Gallery Widget -->
			    	
			    	<div class="clearfix gallery aside-gallery">

                	<h3><strong>Gallery</strong></h3>

			    		<!-- Start thumbnail -->
			    		<div class="mosaic-block half fade">
			    			<a href="/img/thumb-1.jpg" class="mosaic-overlay fancybox" data-fancybox-group="SidebarGallery" title="Insert Your Title"></a>
			    			<div class="mosaic-backdrop"><img src="/img/thumb-1.jpg" alt="Start" /></div>
			    		</div>
			    		
			    		<!-- Start thumbnail -->	
			    		<div class="mosaic-block half last fade">
			    			<a href="/img/thumb-2.jpg" class="mosaic-overlay fancybox" data-fancybox-group="SidebarGallery" title="Insert Your Title"></a>
			    			<div class="mosaic-backdrop"><img src="/img/thumb-2.jpg" alt="Mock" /></div>
			    		</div>
			    		
			    		<!-- Start thumbnail -->
			    		<div class="mosaic-block half fade">
			    			<a href="/img/thumb-3.jpg" class="mosaic-overlay fancybox" data-fancybox-group="SidebarGallery" title="Insert Your Title"></a>
			    			<div class="mosaic-backdrop"><img src="/img/thumb-3.jpg" alt="Mock" /></div>
			    		</div>
			    		
			    		<!-- Start thumbnail -->
			    		<div class="mosaic-block half last fade">
			    			<a href="/img/thumb-4.jpg" class="mosaic-overlay fancybox" data-fancybox-group="SidebarGallery" title="Insert Your Title"></a>
			    			<div class="mosaic-backdrop"><img src="/img/thumb-4.jpg" alt="Mock" /></div>
			    		</div>
			    		
			    		<!-- Start thumbnail -->
			    		<div class="mosaic-block half fade">
			    			<a href="/img/thumb-5.jpg" class="mosaic-overlay fancybox" data-fancybox-group="SidebarGallery" title="Insert Your Title"></a>
			    			<div class="mosaic-backdrop"><img src="/img/thumb-5.jpg" alt="Mock" /></div>
			    		</div>
			    		
			    		<!-- Start thumbnail -->	
			    		<div class="mosaic-block half last fade">
			    			<a href="/img/thumb-6.jpg" class="mosaic-overlay fancybox" data-fancybox-group="SidebarGallery" title="Insert Your Title"></a>
			    			<div class="mosaic-backdrop"><img src="/img/thumb-6.jpg" alt="Mock" /></div>
			    		</div>
			    			
			    			
						<p><a class="more">更多</a></p>
	
			    	</div>

                <hr class="aside-gallery">                		
				<? } ?>
				
				
			    	
				    	<div class="clearfix aside-contact">
				    	
                			<h3><strong>聯繫<?=$user['title']?></strong></h3>
							<? if($user['fb']) { ?><div class="fb-like-box" style="margin-left: -10px; margin-bottom: 5px; margin-top: -5px;" data-href="<?=$user['fb']?>" data-width="200" data-colorscheme="light" data-show-faces="false" data-header="false" data-stream="false" data-show-border="false"></div><? } ?>
							<ul class="link-list">
    	       					<? if($user['website']) { ?><li><a href="#">網站名稱</a></li><? } ?>
    	       					<? if($user['phone']) { ?><li><a href="tel:<?=$user['phone']?>"><?=$user['phone']?></a></li><? } ?>
    	       					<? if($user['address']) { ?><li><a href="https://www.google.com.tw/maps/search/<?=$user['address']?>/?hl=zh-TW" target="blank"><?=$user['address']?></a></li><? } ?>
    	       					
    	       					<? if($user['email']) { ?><li><a href="emailto:<?=$user['email']?>"><?=$user['email']?></a></li><? } ?>
    	       				</ul>
                		</div>
			    	
			    	
			    		<a href="#" target="_blank">回到選舉動態首頁</a>

			    			    	
				</aside> 
				<!-- Finish Sidebar -->

        	</div> <!-- #main -->
        </div> <!-- #main-container -->
    </div>	


	<!-- /////////////////// --> 			
	<!-- Start Widget Footer -->
	<div class="outter-wrapper widget-footer main clearfix">
		<div class="wrapper clearfix">
			
			<!-- Start Column -->
			<div class="fourth widget">
				<h3>台灣綠黨</h3>
				<p>台灣綠黨簡介台灣綠黨簡介台灣綠黨簡介台灣綠黨簡介台灣綠黨簡介台灣綠黨簡介台灣綠黨簡介台灣綠黨簡介台灣綠黨簡介台灣綠黨簡介台灣綠黨簡介台灣綠黨簡介台灣綠黨簡介台灣綠黨簡介台灣綠黨簡介</p>				
			</div>

			<!-- Start Column -->
			<div class="fourth widget footer-news">
				<h3>最新訊息</h3>
                			<div class="mosaic-block fade">
                				<a href="#" class="mosaic-overlay link" title="新聞標題"></a><div class="mosaic-backdrop">
                				<div class="corner-date">8/26</div><img src="/img/small_thumb3.jpg" alt="Mock" /></div>
                			</div>
                			<h3 class="title"><a href="#">新聞標題</a></h3>
			</div> 

			
			<!-- Start Column -->	
			<div class="fourth widget footer-signup">
				<h3>訂閱電子報</h3>
				<p>關注綠黨最新消息</p>
            <form id="subscribe-newsletter" style="margin-top:0;" action="#" method="post">                							
				<input type="email" placeholder="Email" name="email" id="email" value="" />
				<input type="submit" class="btn small-btn" name="" value="訂閱" />
			</form>
			</div>
				
			<!-- Start Column -->	
			<div class="fourth widget last footer-action">
				<h3>行動參與，挺好的！</h3>
				<ul>
					<li><a href="#">捐款給綠黨</a></li>
					<li><a href="#">成為志工</a></li>
					<li><a href="#">加入黨員</a></li>					
					<li><a href="#">合作提案</a></li>
				</ul>
			</div>
			
		</div>
	</div>
	<!-- End Widget Footer -->			
				
	
	
	
	<!-- /////////////////// --> 
	<!-- Start Footer -->
	 <footer class="outter-wrapper feature">
			<div class="wrapper">
			<div class="clearfix">
				<div class="foot right">
					<!-- Social Media icons -->
					<ul class="social-link">
						<li><a href="https://www.facebook.com/taiwangreenparty" target="_blank"><?=$user['title']?>選舉動態首頁</a></li>
						<li>｜</li>						
						<li><a href="https://www.facebook.com/taiwangreenparty" target="_blank"><em class="icon-facebook-sign"></em> 綠黨粉絲團</a></li>
					</ul>
				</div>	
				<!-- Copyright Info -->				
				<div class="foot left">&copy; Copyright Green Party Taiwan 2014</div>
			</div>
			</div>
	 </footer> 	
	 <!-- End Footer -->
    
		
	<!-- /////////////////// --> 
	<!-- Start Scripts -->
		<!--<script type="text/javascript" src="/js/vendor/jquery-1.8.3.min.js"></script>-->
	<script src="http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js"></script>
		        				
	<script type="text/javascript" src="/js/fitvids.min.js"></script>
	<script type="text/javascript" src="/js/fancybox/jquery.fancybox.js?v=2.1.4"></script>
	<script type="text/javascript" src="/js/placeholder.js"></script>
	<script type="text/javascript" src="/js/jquery.flexslider-min.js"></script>
	<script type="text/javascript" src="/js/mosaic.1.0.1.min.js"></script>
	<script type="text/javascript" src="/js/cleantabs.jquery.js"></script>

	<script type="text/javascript" src="/rs-plugin/js/jquery.themepunch.plugins.min.js"></script>
	<script type="text/javascript" src="/rs-plugin/js/jquery.themepunch.revolution.min.js"></script>
	<script type="text/javascript" src="/js/rs-slider.js"></script>

	<script type="text/javascript" src="/js/contact.js"></script>
	<script type="text/javascript" src="/js/jquery.form.js"></script>
	<script type="text/javascript" src="/js/jquery.validate.min.js"></script>
	<script type="text/javascript" src="/js/twphone.js"></script>

	<script type="text/javascript" src="/js/jquery.stellar.min.js"></script>
	<script type="text/javascript" src="/js/jquery.scrollUp.min.js"></script>
	<script type="text/javascript" src="/js/selectivizr-min.js"></script>
	
	<script src="js/kkcountdown.min.js" type="text/javascript"></script>
	<script type="text/javascript">
            $(document).ready(function(){
                $(".kkcount-down").kkcountdown({
                	dayText		: '',
                	daysText 	: '',
                    hoursText	: ':',
                    minutesText	: ':',
                    secondsText	: '',
                    displayZeroDays : false,
                    oneDayClass	: 'oneday'
                });
            });
        </script>

	<script type="text/javascript" src="/js/fittext.js"></script>	
    <script type="text/javascript">
		// FitText.js
		fitText(document.getElementById('promise'), 0.83)
	</script>
	<script type="text/javascript" src="/js/purl.js"></script>
	
	<script type="text/javascript" src="/js/main.js?<?=time?>"></script>

    <script type="text/javascript" src="/timeline/files/javascript/timeline.js"></script>			
									
        <script type="text/javascript">
            $(document).ready(function() {
            	var agoto;

				var url = $.url(); // parse the current page URL
				console.log(url);
            	
            	var current_nid = url.data.param.query.nid;
            	
	            if(current_nid) {

					$( ".issues > li" ).each(function( index ) {
						  
						  var lia = $( this ).find('a');
						  console.log( index + ": " + lia.attr('hash-id') );

					  if(lia.attr('hash-id') == current_nid) {
					  	
					  	lia.addClass('active');
					  	$(this).find('div').css('display', 'block');  
						agoto = '#' + lia.attr('id');	
						
					  }else{
					  	lia.removeClass('active');
					  	$(this).find('div').css('display', 'none');  					  
					  	
					  }
					})
				}

				if(agoto) { 
					var agotoy = $(agoto).offset(); 
					$('body').scrollTo(agotoy.top-200, {duration:800}).delay( 800 );
				}
			});
                        
        </script>
 
	</body>
</html>
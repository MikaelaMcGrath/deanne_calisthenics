<?php
/**
 * @file
 * Plain layout template, simply printing the content areas in divs.
 */
?>
<div class="top">
	<?php print $content['top']; ?>
</div>
<div class="info-boxes">
	<div class="left">
		<?php print $content['left']; ?>
	</div>
	<div class="middle">
		<?php print $content['middle']; ?>
	</div>
	<div class="right">
		<?php print $content['right']; ?>
	</div>
</div>

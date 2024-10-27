<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.1">
	<xsl:template match="/library">
		<html>
		<body>
		<table border="1">
		<tr> <td style="color:red;">Title</td> <td style="color:red;">Price</td> <td style="color:red;">Discount</td></tr>
		
		<xsl:for-each select="book">
		<tr>
			<td><xsl:value-of select="title"></xsl:value-of></td>
			<td><xsl:value-of select="price"></xsl:value-of></td>
			<td><xsl:if test="price &gt; 500">Discount of 10%</xsl:if></td>
		</tr>
		</xsl:for-each>
		</table>
		</body>
		</html>
	</xsl:template>
</xsl:stylesheet>